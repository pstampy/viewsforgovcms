<?php
/**
 * @file
 * viewsforgovcms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function viewsforgovcms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_items';
  $view->description = 'Displays content items in different formats.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content items';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Attachments';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'summary';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
    'link' => 'link',
    'pages' => 'pages',
    'panel' => 'panel',
    'promotion' => 'promotion',
  );

  /* Display: Home page - Top level */
  $handler = $view->new_display('panel_pane', 'Home page - Top level', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest updates';
  $handler->display->display_options['display_description'] = 'Shows content from across the site, for the home page only.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'summary';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  /* Filter criterion: Content: Minister (field_minister) */
  $handler->display->display_options['filters']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['filters']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['filters']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['filters']['field_minister_tid']['value'] = array(
    1281 => '1281',
    1414 => '1414',
    1055 => '1055',
  );
  $handler->display->display_options['filters']['field_minister_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_minister_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_minister_tid']['vocabulary'] = 'ministers';

  /* Display: Footer - Departmental Websites */
  $handler = $view->new_display('block', 'Footer - Departmental Websites', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Departmental websites';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: APH Link */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'link' => 'link',
  );
  /* Filter criterion: Content: Website type (field_website_type) */
  $handler->display->display_options['filters']['field_website_type_tid']['id'] = 'field_website_type_tid';
  $handler->display->display_options['filters']['field_website_type_tid']['table'] = 'field_data_field_website_type';
  $handler->display->display_options['filters']['field_website_type_tid']['field'] = 'field_website_type_tid';
  $handler->display->display_options['filters']['field_website_type_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_website_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_website_type_tid']['vocabulary'] = 'website_types';

  /* Display: Footer - Associated Websites */
  $handler = $view->new_display('block', 'Footer - Associated Websites', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Associated websites';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: APH Link */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'link' => 'link',
  );
  /* Filter criterion: Content: Website type (field_website_type) */
  $handler->display->display_options['filters']['field_website_type_tid']['id'] = 'field_website_type_tid';
  $handler->display->display_options['filters']['field_website_type_tid']['table'] = 'field_data_field_website_type';
  $handler->display->display_options['filters']['field_website_type_tid']['field'] = 'field_website_type_tid';
  $handler->display->display_options['filters']['field_website_type_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_website_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_website_type_tid']['vocabulary'] = 'website_types';

  /* Display: All content - front page only */
  $handler = $view->new_display('block', 'All content - front page only', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest news';
  $handler->display->display_options['display_description'] = 'This view displays all content from everyone, or from a given minister.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'summary';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  /* Filter criterion: Content: Minister (field_minister) */
  $handler->display->display_options['filters']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['filters']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['filters']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['filters']['field_minister_tid']['value'] = array(
    1281 => '1281',
    1414 => '1414',
    1055 => '1055',
  );
  $handler->display->display_options['filters']['field_minister_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_minister_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_minister_tid']['vocabulary'] = 'ministers';

  /* Display: Content Type Sidebar - Most Popular */
  $handler = $view->new_display('panel_pane', 'Content Type Sidebar - Most Popular', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most viewed today';
  $handler->display->display_options['display_description'] = 'Shows the most popular content within a given content type.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ministers' => 'ministers',
    'archived' => 0,
    'collections' => 0,
    'locations' => 0,
    'tags' => 0,
    'website_types' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '50',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Views today */
  $handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['type']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['type']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['type']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'none',
      'context' => 'string.raw',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );

  /* Display: Ministerial Most Popular */
  $handler = $view->new_display('panel_pane', 'Ministerial Most Popular', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most viewed today';
  $handler->display->display_options['display_description'] = 'Shows the most popular content within a given content type, filtered by minister.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([type])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '50',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Views today */
  $handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'none',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Minister (field_minister)',
    ),
    'type' => array(
      'type' => 'none',
      'context' => 'string.raw',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attachments';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'nid';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'nothing';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'D, d M Y H:i:s O';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'http://minister.industry.gov.au/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Department of Industry, Innovation and Science';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_minister_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['type']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['type']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'galleries' => 'galleries',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  $handler->display->display_options['path'] = 'feed/%/%/rss.xml';
  $handler->display->display_options['sitename_title'] = 1;

  /* Display: Attachments */
  $handler = $view->new_display('panel_pane', 'Attachments', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays attachments on a node.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_attachment' => 'field_attachment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_attachment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Attachment */
  $handler->display->display_options['fields']['field_attachment']['id'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['fields']['field_attachment']['field'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_attachment']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['field_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_attachment']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachment']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_attachment']['settings'] = array(
    'file_view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_attachment']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_attachment']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Attachments';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'articles' => 'articles',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
    'link' => 'link',
    'pages' => 'pages',
    'panel' => 'panel',
    'promotion' => 'promotion',
  );
  /* Filter criterion: Content: Attachment (field_attachment:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = '>=';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Feed: industry.gov.au */
  $handler = $view->new_display('feed', 'Feed: industry.gov.au', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Attachments';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'nid';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'nothing';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'D, d M Y H:i:s O';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'http://minister.industry.gov.au/node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Department of Industry, Innovation and Science';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_minister_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['type']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['type']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  $handler->display->display_options['arguments']['type']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'galleries' => 'galleries',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  /* Filter criterion: Content: Is this article too political to appear on industry.gov.au? (field_yes_no_select) */
  $handler->display->display_options['filters']['field_yes_no_select_value']['id'] = 'field_yes_no_select_value';
  $handler->display->display_options['filters']['field_yes_no_select_value']['table'] = 'field_data_field_yes_no_select';
  $handler->display->display_options['filters']['field_yes_no_select_value']['field'] = 'field_yes_no_select_value';
  $handler->display->display_options['filters']['field_yes_no_select_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_yes_no_select_value']['value'] = array(
    'Yes' => 'Yes',
  );
  $handler->display->display_options['path'] = 'feed/%/%/industry-rss.xml';
  $handler->display->display_options['sitename_title'] = 1;

  /* Display: All content */
  $handler = $view->new_display('panel_pane', 'All content', 'content_items_all_items');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest news';
  $handler->display->display_options['display_description'] = 'This view displays all content from everyone, or from a given minister.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Your request returned no results. Please use the menus or the Search bar to locate the content you require.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'author';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Minister (field_minister) */
  $handler->display->display_options['relationships']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['relationships']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['relationships']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['relationships']['field_minister_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'field_minister_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );

  /* Display: Archive */
  $handler = $view->new_display('panel_pane', 'Archive', 'content_items_archive');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Displays archived items separated into ministers.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>[field_full_name]</h2>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Minister (field_minister) */
  $handler->display->display_options['relationships']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['relationships']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['relationships']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['relationships']['field_minister_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'field_minister_tid';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['empty'] = 'No full name found!';
  $handler->display->display_options['fields']['field_full_name']['type'] = 'text_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([type])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['vocabularies'] = array(
    'archived' => 'archived',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'archived' => 'archived',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bio' => 'bio',
    'galleries' => 'galleries',
    'link' => 'link',
    'pages' => 'pages',
    'panel' => 'panel',
    'promotion' => 'promotion',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'user',
      'context' => 'entity:node.field_url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Minister (field_minister)',
    ),
  );
  $export['content_items'] = $view;

  $view = new view();
  $view->name = 'content_types';
  $view->description = 'Displays the site content types in separate views.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Types';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'No results';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'You\'ve tried to access something that doesn\'t exist. Please check the URL or try searching for the content you are looking for.';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['title'] = '%1';
  $handler->display->display_options['arguments']['type']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'link' => 'link',
    'pages' => 'pages',
    'panel' => 'panel',
    'promotion' => 'promotion',
    'webform' => 'webform',
  );

  /* Display: Content Types - By Minister */
  $handler = $view->new_display('panel_pane', 'Content Types - By Minister', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Displays various content types ';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['title'] = '%1';
  $handler->display->display_options['arguments']['type']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['type']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['type']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['type']['default_argument_options']['vocabularies'] = array(
    'collections' => 'collections',
  );
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['breadcrumb'] = '%2 - %1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'link' => 'link',
    'pages' => 'pages',
    'panel' => 'panel',
    'promotion' => 'promotion',
    'webform' => 'webform',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Ministers (field_minister)',
    ),
    'type' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );

  /* Display: Content types - First Level */
  $handler = $view->new_display('panel_pane', 'Content types - First Level', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Shows content by content type, unsorted.';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'ministers' => 'ministers',
    'archived' => 0,
    'collections' => 0,
    'locations' => 0,
    'tags' => 0,
    'website_types' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['title'] = '%1';
  $handler->display->display_options['arguments']['type']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'link' => 'link',
    'pages' => 'pages',
    'panel' => 'panel',
    'promotion' => 'promotion',
    'webform' => 'webform',
  );
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'type' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );

  /* Display: Content Types - Minister - Media Releases */
  $handler = $view->new_display('panel_pane', 'Content Types - Minister - Media Releases', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Displays Media Releases by minister';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['breadcrumb'] = '%2 - %1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'media_releases' => 'media_releases',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Ministers (field_minister)',
    ),
    'type' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );

  /* Display: Content Types - Minister - Speeches */
  $handler = $view->new_display('panel_pane', 'Content Types - Minister - Speeches', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'Displays speeches by minister';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['breadcrumb'] = '%2 - %1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speeches' => 'speeches',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Ministers (field_minister)',
    ),
    'type' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );

  /* Display: Content Types - Minister - Transcripts */
  $handler = $view->new_display('panel_pane', 'Content Types - Minister - Transcripts', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Transcripts';
  $handler->display->display_options['display_description'] = 'Displays transcripts by minister';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['breadcrumb'] = '%2 - %1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'transcripts' => 'transcripts',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Ministers (field_minister)',
    ),
    'type' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );

  /* Display: Content Types - Minister - Articles */
  $handler = $view->new_display('panel_pane', 'Content Types - Minister - Articles', 'panel_pane_6');
  $handler->display->display_options['display_description'] = 'Displays articles by minister';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Date and time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_date_and_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'general',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: Date and time (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['breadcrumb'] = '%2 - %1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Ministers (field_minister)',
    ),
    'type' => array(
      'type' => 'panel',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Type',
    ),
  );
  $export['content_types'] = $view;

  $view = new view();
  $view->name = 'galleries_collections_';
  $view->description = 'Displays collections from the site, sorted by minister where required.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Galleries (Collections)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'collections' => 'collections',
  );

  /* Display: Collections Home Page */
  $handler = $view->new_display('panel_pane', 'Collections Home Page', 'panel_pane_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Header';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'This page shows collections of images. Select a collection title to view all images in that collection.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Collection */
  $handler->display->display_options['relationships']['reverse_field_collection_node']['id'] = 'reverse_field_collection_node';
  $handler->display->display_options['relationships']['reverse_field_collection_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_collection_node']['field'] = 'reverse_field_collection_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'ministers/%1/';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'ministers/all/galleries/[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(DISTINCT Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_collection_node';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = 'Number of images in this collection';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Minister Collections Home Page */
  $handler = $view->new_display('panel_pane', 'Minister Collections Home Page', 'panel_pane_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Header';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'This page shows collections of images. Select a collection title to view all images in that collection.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Collection */
  $handler->display->display_options['relationships']['reverse_field_collection_node']['id'] = 'reverse_field_collection_node';
  $handler->display->display_options['relationships']['reverse_field_collection_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_collection_node']['field'] = 'reverse_field_collection_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = 'ministers/%1/';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'ministers/%1/galleries/[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_collection_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'ministers/%1/galleries/[tid]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  /* Field: COUNT(Content: Title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_collection_node';
  $handler->display->display_options['fields']['title']['group_type'] = 'count';
  $handler->display->display_options['fields']['title']['label'] = 'Number of images in this collection';
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'em';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Field: Date and time (field_date_and_time)) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['relationship'] = 'reverse_field_collection_node';
  $handler->display->display_options['sorts']['field_date_and_time_value']['group_type'] = 'count';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['relationship'] = 'reverse_field_collection_node';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'summary';
  $handler->display->display_options['argument_input'] = array(
    'field_minister_tid' => array(
      'type' => 'panel',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Minister (field_minister)',
    ),
  );
  $export['galleries_collections_'] = $view;

  $view = new view();
  $view->name = 'galleries_items_';
  $view->description = 'Displays individual items within collections';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Galleries (Items)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'gallery-item item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'lightbox2__lightbox__large__original';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['title'] = '%1: %2';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['fail'] = 'summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'galleries' => 'galleries',
  );

  /* Display: Gallery (Items) */
  $handler = $view->new_display('panel_pane', 'Gallery (Items)', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Shows individual items within collections, sorted by minister if required.';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid_1']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['tid_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['transform'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'collections' => 'collections',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'summary';
  $handler->display->display_options['argument_input'] = array(
    'tid_1' => array(
      'type' => 'none',
      'context' => 'entity:taxonomy_term.name',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
    'tid' => array(
      'type' => 'none',
      'context' => 'entity:taxonomy_term.name',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $export['galleries_items_'] = $view;

  $view = new view();
  $view->name = 'header_images';
  $view->description = 'This contextual view changes the header images based on current contexts.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Header images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ministers' => 'ministers',
  );

  /* Display: Minister Headshot */
  $handler = $view->new_display('block', 'Minister Headshot', 'header_minister');
  $handler->display->display_options['display_description'] = 'Displays a headshot image of the minister.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'branding-image';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;

  /* Display: Minister Crest */
  $handler = $view->new_display('block', 'Minister Crest', 'header_crest');
  $handler->display->display_options['display_description'] = 'This view displays the ministerial crest image.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'branding-text';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="branding-text"><div class="header-image"><a class="front" href="/" title="home"><img alt="Australian Government" title="Australian Government" src="/sites/all/themes/custom/ministers_2016/images/crest-no-text.png" /></a></div>
<div class="header-text"><h1>Ministers and Assistant Ministers<br /> for the Department of Industry, Innovation and Science</h1></div></div>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<img src="/sites/all/themes/custom/ministers_2016/images/crest-no-text.png" alt="Australian Government" />';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/ministers/%1';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'header-image';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_full_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Responsibilities */
  $handler->display->display_options['fields']['field_responsibilities']['id'] = 'field_responsibilities';
  $handler->display->display_options['fields']['field_responsibilities']['table'] = 'field_data_field_responsibilities';
  $handler->display->display_options['fields']['field_responsibilities']['field'] = 'field_responsibilities';
  $handler->display->display_options['fields']['field_responsibilities']['label'] = '';
  $handler->display->display_options['fields']['field_responsibilities']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_responsibilities']['alter']['text'] = '[field_full_name] <span class="subheading">[field_responsibilities]</span>';
  $handler->display->display_options['fields']['field_responsibilities']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_responsibilities']['alter']['path'] = '/ministers/%1';
  $handler->display->display_options['fields']['field_responsibilities']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_responsibilities']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_responsibilities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_responsibilities']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_responsibilities']['element_wrapper_class'] = 'header-text';
  $handler->display->display_options['fields']['field_responsibilities']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_responsibilities']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['value'] = 'all-values';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'empty';
  $export['header_images'] = $view;

  $view = new view();
  $view->name = 'minister_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Minister menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'menu';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'node';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['machine_name'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['type']['alter']['path'] = '/ministers/%1/[type_1]';
  $handler->display->display_options['fields']['type']['element_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Minister (field_minister) */
  $handler->display->display_options['arguments']['field_minister_tid']['id'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['table'] = 'field_data_field_minister';
  $handler->display->display_options['arguments']['field_minister_tid']['field'] = 'field_minister_tid';
  $handler->display->display_options['arguments']['field_minister_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_minister_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_minister_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_minister_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_minister_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_minister_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['vocabularies'] = array(
    'ministers' => 'ministers',
  );
  $handler->display->display_options['arguments']['field_minister_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bio' => 'bio',
    'galleries' => 'galleries',
    'link' => 'link',
    'pages' => 'pages',
    'panel' => 'panel',
    'promotion' => 'promotion',
    'webform' => 'webform',
  );

  /* Display: Minister Menu: Main */
  $handler = $view->new_display('block', 'Minister Menu: Main', 'main');
  $export['minister_menu'] = $view;

  $view = new view();
  $view->name = 'ministers';
  $view->description = 'Shows minister taxonomy terms in various ways.';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Ministers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ministers for Industry, Innovation, Science and Research';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['alter']['path'] = 'ministers/[name]';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Order */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'field_data_field_order';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = '';
  $handler->display->display_options['fields']['field_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_order']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Taxonomy term: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ministers' => 'ministers',
  );
  /* Filter criterion: Taxonomy term: Full name (field_full_name) */
  $handler->display->display_options['filters']['field_full_name_value']['id'] = 'field_full_name_value';
  $handler->display->display_options['filters']['field_full_name_value']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['filters']['field_full_name_value']['field'] = 'field_full_name_value';

  /* Display: Ministers: Home page */
  $handler = $view->new_display('panel_pane', 'Ministers: Home page', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ministers and Assistant Ministers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['alter']['path'] = 'ministers/[name]';
  $handler->display->display_options['fields']['field_full_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ministers' => 'ministers',
  );

  /* Display: Ministers: Gallery */
  $handler = $view->new_display('panel_pane', 'Ministers: Gallery', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'This lets users choose a specific ministerial gallery.';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Gallery minister select footer';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Please select which minister\'s galleries you would like to view.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['alter']['path'] = 'ministers/[name]/galleries';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ministers' => 'ministers',
  );
  /* Filter criterion: Taxonomy term: Full name (field_full_name) */
  $handler->display->display_options['filters']['field_full_name_value']['id'] = 'field_full_name_value';
  $handler->display->display_options['filters']['field_full_name_value']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['filters']['field_full_name_value']['field'] = 'field_full_name_value';
  $handler->display->display_options['filters']['field_full_name_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_full_name_value']['value'] = 'The Hon Bob Baldwin MP';
  /* Filter criterion: Taxonomy term: Full name (field_full_name) */
  $handler->display->display_options['filters']['field_full_name_value_1']['id'] = 'field_full_name_value_1';
  $handler->display->display_options['filters']['field_full_name_value_1']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['filters']['field_full_name_value_1']['field'] = 'field_full_name_value';
  $handler->display->display_options['filters']['field_full_name_value_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_full_name_value_1']['value'] = 'The Hon Ian Macfarlane MP';

  /* Display: Home Page Alternate */
  $handler = $view->new_display('block', 'Home Page Alternate', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ministers for Industry';
  $handler->display->display_options['display_description'] = 'This is a placeholder view until there is more content in the site.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'minister';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: APH Link */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_full_name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_full_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_full_name']['element_default_classes'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_type'] = '0';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Order (field_order) */
  $handler->display->display_options['sorts']['field_order_value']['id'] = 'field_order_value';
  $handler->display->display_options['sorts']['field_order_value']['table'] = 'field_data_field_order';
  $handler->display->display_options['sorts']['field_order_value']['field'] = 'field_order_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ministers' => 'ministers',
  );
  $export['ministers'] = $view;

  $view = new view();
  $view->name = 'top_requests';
  $view->description = 'This view lists the most-requested content on the site so it can be displayed in the footer menu.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Top Requests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articles' => 'articles',
    'galleries' => 'galleries',
    'media_releases' => 'media_releases',
    'speeches' => 'speeches',
    'transcripts' => 'transcripts',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['top_requests'] = $view;

  return $export;
}
