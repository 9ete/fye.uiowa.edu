<?php
// Footheme by Adaptivethemes.com, a starter sub-sub-theme.

/**
 * Rename each function and instance of "footheme" to match
 * your subthemes name, e.g. if you name your theme "footheme" then the function
 * name will be "footheme_preprocess_hook". Tip - you can search/replace
 * on "footheme".
 */

/**
 * Override or insert variables into the html templates.
 * Replace 'footheme' with your themes name, i.e. mytheme_preprocess_html()
 */
function fye_preprocess_html(&$vars) {

  // Load the media queries styles
  // If you change the names of these files they must match here - these files are
  // in the /css/ directory of your subtheme - the names must be identical!
  $media_queries_css = array(
    'fye.responsive.style.css',
    'fye.responsive.gpanels.css'
  );
  load_subtheme_media_queries($media_queries_css, 'fye'); // Replace 'footheme' with your themes name

 /**
  * Load IE specific stylesheets
  * AT automates adding IE stylesheets, simply add to the array using
  * the conditional comment as the key and the stylesheet name as the value.
  *
  * See our online help: http://adaptivethemes.com/documentation/working-with-internet-explorer
  *
  * For example to add a stylesheet for IE8 only use:
  *
  *  'IE 8' => 'ie-8.css',
  *
  * Your IE CSS file must be in the /css/ directory in your subtheme.
  */
  // Conditionally lode ie7 and below stylesheet
  $ie_files = array(
    'lte IE 7' => 'ie-lte-7.css',
  );
  load_subtheme_ie_styles($ie_files, 'fye'); // Replace 'footheme' with your themes name
  // */

  // Load custom Theme Variables
  global $theme_key;
  $theme_name = 'fye';

  // Add custom theme settings classes
  $settings_array = array(
	'ui_globalbar', //custom added for ui-global bar
	'featured_background', //custom textures for featured image
  );
  foreach ($settings_array as $setting) {
    $vars['classes_array'][] = theme_get_setting($setting);
  }

}


/**
 * Page preprocessing
 */ 
function fye_preprocess_page(&$vars) {
 $vars['ui_header'] = 
 
 '<div id="ui-wrapper"><div class="container">
 <div id="ui-global-bar">
	<div id="ui-logo"><a href="http://www.uiowa.edu">The University of Iowa</a></div>
	<div id="ui-global-bar-nav">
		<div id="ui-global-links">
			<ul>
				<li><a href="http://www.uiowa.edu/homepage/directories/">Phonebook</a></li>
				<li><a href="http://www.uiowa.edu/homepage/hub/tours.html">Maps</a></li>
				<li><a href="http://www.uiowa.edu/homepage/search/index.html">A-Z</a></li>
			</ul>
		</div>
		<!-- /ui-global-menu -->
		<div id="gsa-search">
			<form action="http://search.uiowa.edu/search" method="get">
				<fieldset><legend class="element-hidden">Search</legend>
					<div id="search-box"><label class="element-hidden" for="search-terms">Search Terms</label> <input id="search-terms" maxlength="256" name="q" placeholder="Start Searching ..." size="15" type="text" value="" /> <label class="element-hidden" for="sitesearch">Search Scope</label> <select id="sitesearch" name="sitesearch"><option id="search-this-site" value="' . $_SERVER['SERVER_NAME'] . '">This Site</option><option id="search-ui" value="www.uiowa.edu">All Sites</option></select></div>
					<!-- /search box --><input id="submit-search" name="btnG" type="submit" value="Search" /> <input name="site" type="hidden" value="default_collection" /> <input name="client" type="hidden" value="default_frontend" /> <input name="output" type="hidden" value="xml_no_dtd" /> <input name="proxystylesheet" type="hidden" value="default_frontend" /></fieldset>
			</form>
		</div>
		<!-- /gsa-search --></div>
	<!-- /global-bar-nav --></div>
<!-- /ui-global-bar -->
</div></div><!-- /ui-wrapper and conatiner -->';
}

