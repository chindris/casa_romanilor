/**
 * @file global
 *
 * Contains the main javascript file of the theme.
 */

(function ($) {

  Drupal.behaviors.sidebarToggle = {
	attach: function(context, settings) {
	  $('#sidebar-first-toggler').once('sidebar-first-toggler').bind('click', function() {
	    $('#region-sidebar-first').slideToggle();
	  });
	}
  }
})(jQuery);
