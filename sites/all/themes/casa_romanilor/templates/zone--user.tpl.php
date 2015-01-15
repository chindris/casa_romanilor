<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>
  <div<?php print $content_attributes; ?>>
    <div class="zone-inner clearfix">
      <div id="zone-user-content" class="clearfix">
        <?php print $content; ?>
      </div>
    </div>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>
<div id="sidebar-first-toggler" title="<?php print t('Show/Hide sidebar')?>"></div>
