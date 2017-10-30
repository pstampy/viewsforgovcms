<?php
/**
 * @file
 * viewsforgovcms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function viewsforgovcms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function viewsforgovcms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function viewsforgovcms_node_info() {
  $items = array(
    'articles' => array(
      'name' => t('Articles'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bio' => array(
      'name' => t('Bio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'galleries' => array(
      'name' => t('Galleries'),
      'base' => 'node_content',
      'description' => t('This content type holds images for galleries, tagged by minister, location, date and gallery collection.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => t('This content type holds links to websites, to be displayed in the footer of the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'media_releases' => array(
      'name' => t('Media Releases'),
      'base' => 'node_content',
      'description' => t('This content type holds media releases.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pages' => array(
      'name' => t('Pages'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speeches' => array(
      'name' => t('Speeches'),
      'base' => 'node_content',
      'description' => t('This content type holds speeches.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'transcripts' => array(
      'name' => t('Transcripts'),
      'base' => 'node_content',
      'description' => t('This content type holds transcripts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
