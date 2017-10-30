<?php
/**
 * @file
 * viewsforgovcms.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function viewsforgovcms_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|articles|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'articles';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_date_and_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'em',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|articles|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|articles|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'articles';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|articles|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|bio|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'bio';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|bio|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|galleries|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'galleries';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|galleries|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|link|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'link';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|link|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_releases|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_releases';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_date_and_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'em',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|media_releases|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|media_releases|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'media_releases';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|media_releases|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|pages|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'pages';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|pages|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|speeches|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'speeches';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_date_and_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'em',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|speeches|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|speeches|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'speeches';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|speeches|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|transcripts|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'transcripts';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_date_and_time' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'em',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_e_oe' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'strong',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_subject' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_interviewer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|transcripts|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|transcripts|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'transcripts';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|transcripts|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'search_snippet' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'suffix' => '<hr>',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|webform|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|ministers|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'ministers';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|ministers|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function viewsforgovcms_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|articles|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'articles';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'field_date_and_time',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_date_and_time' => 'content',
      'body' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|articles|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|articles|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'articles';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|articles|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|bio|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'bio';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|bio|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|galleries|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'galleries';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|galleries|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|link|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'link';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|link|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_releases|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_releases';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'field_date_and_time',
        1 => 'body',
        2 => 'field_attachment',
      ),
    ),
    'fields' => array(
      'field_date_and_time' => 'content',
      'body' => 'content',
      'field_attachment' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|media_releases|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_releases|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_releases';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|media_releases|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|media_releases|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'media_releases';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'easy_social_1',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'easy_social_1' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|media_releases|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pages|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pages';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|pages|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pages|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pages';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|pages|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speeches|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speeches';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'field_date_and_time',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_date_and_time' => 'content',
      'body' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|speeches|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|speeches|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'speeches';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|speeches|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|transcripts|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'transcripts';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'field_date_and_time',
        1 => 'field_interviewer',
        2 => 'field_subject',
        3 => 'field_e_oe',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_date_and_time' => 'content',
      'field_interviewer' => 'content',
      'field_subject' => 'content',
      'field_e_oe' => 'content',
      'body' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|transcripts|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|transcripts|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'transcripts';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|transcripts|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'search_snippet',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'search_snippet' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|webform|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|ministers|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'ministers';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-naked';
  $ds_layout->settings = array(
    'regions' => array(
      'content' => array(
        0 => 'title',
        1 => 'field_responsibilities',
        2 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'content',
      'field_responsibilities' => 'content',
      'description' => 'content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|ministers|default'] = $ds_layout;

  return $export;
}
