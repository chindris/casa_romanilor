<?php

/**
 * @file
 * mass_pwreset.admin.unc
 *
 * Admin page callbacks for the mass_pwreset module.
 */
function mass_pwreset_form($form, $form_state) {
  $form['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Options'),
  );
  $form['options']['notify_users'] = array(
    '#type' => 'checkbox',
    '#title' => t('Notify users of password reset via email'),
    '#description' => t('Notify users of password reset with Drupal\'s password recovery email.'),
    '#default_value' => 0,
  );
  $form['options']['include_admin_user'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include admin user (uid1)'),
    '#description' => t('Include the administrative superuser id 1 account in the list of passwords being reset.'),
    '#default_value' => 0,
  );
  $form['options']['include_blocked_users'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include blocked users in email'),
    '#description' => t('If "Notify users of password reset via email" is checked, blocked users will not receive an email. Their password will still be reset.'),
    '#default_value' => 0,
    '#states' => array(
      'disabled' => array('#edit-notify-users' => array('checked' => FALSE),
      ),
    ),
  );
  $form['reset_passwords'] = array(
    '#type' => 'submit',
    '#value' => t('Reset passwords'),
    '#submit' => array('mass_pwreset_submit'),
  );

  return $form;
}

/**
 * Reset paswords and notify users
 *
 */
function mass_pwreset_submit($form, &$form_state) {
  // Loop through each user and process password resets and email users.
  $users = db_select('users', 'u')->fields('u')->execute()->fetchAll();
  $uids = array();
  if ($form_state['values']['notify_users'] == '1') {
    $uids['notify_users'] = 1;
    if ($form_state['values']['include_blocked_users']) {
      $uids['notify_blocked'] = 1;
    }
  }
  $queue = DrupalQueue::get('mass_pwreset_reset_pass');
  foreach ($users as $user) {
    // Process uid1 if user requested.
    if ($user->uid !== 0 && ($user->uid > 1 || ($user->uid === 1 && $form_state['values']['include_admin_user'] == '1'))) {
      $uids['uids'][] = $user->uid;
    }
    if (count($uids['uids']) >= 20) {
      $queue->createItem($uids);
      $uids['uids'] = array();
    }
  }
  if (count($uids['uids'])) {
    $queue->createItem($uids);
  }
  drupal_set_message(t('The users have been queued for reseting the passwords.'));
}
