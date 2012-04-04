<?php
/**
 * @file
 * header_featured_image.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function header_featured_image_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function header_featured_image_node_info() {
  $items = array(
    'header_featured_image' => array(
      'name' => t('Header Featured Image'),
      'base' => 'node_content',
      'description' => t('Wide Featured Image for the Header area for customizing the theme of the site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
