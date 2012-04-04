<?php
/**
 * @file
 * header_featured_image.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function header_featured_image_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'header_featured_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Header Featured Image';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Header Featured Image */
  $handler->display->display_options['fields']['field_header_featured_image']['id'] = 'field_header_featured_image';
  $handler->display->display_options['fields']['field_header_featured_image']['table'] = 'field_data_field_header_featured_image';
  $handler->display->display_options['fields']['field_header_featured_image']['field'] = 'field_header_featured_image';
  $handler->display->display_options['fields']['field_header_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_header_featured_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_header_featured_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_header_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_header_featured_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_header_featured_image']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'header_featured_image' => 'header_featured_image',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['header_featured_image'] = $view;

  return $export;
}
