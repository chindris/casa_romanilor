<?php if ($wrapper): ?><div<?php print $attributes; ?>><?php endif; ?>  
  <div<?php print $content_attributes; ?>>
    <div class="zone-inner clearfix">
      <div id="zone-footer-content" class="clearfix">
        <?php print $content; ?>
      </div>
    </div>
  </div>
<?php if ($wrapper): ?></div><?php endif; ?>