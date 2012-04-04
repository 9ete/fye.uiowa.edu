<?php
// Corolla
include_once(drupal_get_path('theme', 'adaptivetheme') . '/inc/google.web.fonts.inc');

function fye_form_system_theme_settings_alter(&$form, &$form_state)  {

  // Custom Body Backgrounds
  $form['at']['pagestyles']['textures']['body_background'] = array(
    '#type' => 'select',
    '#title' => t('Select texture'),
    '#default_value' => theme_get_setting('body_background'),
    '#options' => array(
      'bb-n'  => t('None'),
      'bb-h'  => t('Hatch'),
      'bb-vl' => t('Vertical lines'),
      'bb-hl' => t('Horizontal lines'),
      'bb-g'  => t('Grid'),
      'bb-d'  => t('Dots'),
	  'bb-plus-times'  => t('Plus Times'),
	  'bb-leather'  => t('Leather'),
	  'bb-canvas'  => t('Canvas'),
	  'bb-fye'  => t('First Year Experience'),
	  'bb-fye-grid'  => t('Grid for FYE'),
    ),
  );
  
  // Featrued Image Overlay
  $form['at']['pagestyles']['overlay'] = array(
    '#type' => 'fieldset',
    '#title' => t('Featured Image Overlay'),
    '#description' => t('<h3>Featured Image Overlay</h3><p>This setting adds an overlay to the featured image.</p>'),
  );
  $form['at']['pagestyles']['overlay']['featured_background'] = array(
    '#type' => 'select',
    '#title' => t('Select the feature image overlay'),
    '#default_value' => theme_get_setting('featured_background'),
    '#options' => array(
      'fi-n'  => t('None'),
      'fi-h'  => t('Hatch'),
      'fi-vl' => t('Vertical lines'),
      'fi-hl' => t('Horizontal lines'),
      'fi-g'  => t('Grid'),
      'fi-d'  => t('Dots'),
	  'fi-plus-times'  => t('Plus Times'),
	  'fi-grid2'  => t('Black Grid 8px'),
    ),
  );  
  
  // Custom UI Branded Bar Styles
  $form['at']['ui_branding'] = array(
    '#type' => 'fieldset',
    '#title' => t('UI Branding'),
    '#description' => t('<h3>UI Branding Bar</h3><p>This setting allows you to customize the top University of Iowa branded bar.</p>'),
  );
  $form['at']['ui_branding']['ui_globalbar'] = array(
    '#type' => 'select',
    '#title' => t('UI Branded Bar'),
    '#default_value' => theme_get_setting('ui_globalbar'),
    '#description' => t(''),
    '#options' => array(
      'skin-a' => t('Black Bar'),
	  'skin-b' => t('Yellow Bar'),
	  'skin-c' => t('Gray Textured Bar'),
    ),
  );
}
