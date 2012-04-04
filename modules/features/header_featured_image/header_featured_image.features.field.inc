<?php
/**
 * @file
 * header_featured_image.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function header_featured_image_field_default_fields() {
  $fields = array();

  // Exported field: 'node-header_featured_image-field_header_featured_image'
  $fields['node-header_featured_image-field_header_featured_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_header_featured_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'header_featured_image',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_header_featured_image',
      'label' => 'Header Featured Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'imagefield_crop',
        'settings' => array(
          'collapsible' => '2',
          'croparea' => '0x0',
          'enforce_minimum' => 0,
          'enforce_ratio' => 1,
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
          'resolution' => '1900x430',
        ),
        'type' => 'imagefield_crop_widget',
        'weight' => '31',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Header Featured Image');

  return $fields;
}
