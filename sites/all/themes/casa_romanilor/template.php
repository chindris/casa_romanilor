<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

/**
 * Implements hook_process_region().
 */
function casa_romanilor_process_region(&$vars) {
  if ($vars['elements']['#region'] == 'user_first') {
    $theme = alpha_get_theme();
    $vars['site_name'] = $theme->page['site_name'];
    $vars['logo'] = $theme->page['logo'];
    $vars['logo_img'] = $vars['logo'] ? '<img src="' . $vars['logo'] . '" alt="' . $vars['site_name'] . '" id="logo" />' : '';
    $vars['linked_logo_img'] = $vars['logo'] ? l($vars['logo_img'], '<front>', array('attributes' => array('rel' => 'home', 'title' => t($vars['site_name'])), 'html' => TRUE)) : '';
  }
}