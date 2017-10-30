<?php
/**
 * @file
 * viewsforgovcms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function viewsforgovcms_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Generic content',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%node:title',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'link' => 'link',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'description' => array(
          'value' => '[node:summary]',
        ),
        'abstract' => array(
          'value' => '[node:summary]',
        ),
        'keywords' => array(
          'value' => '[node:field_tags]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
    'main-content' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '76d59d04-0959-44c2-a565-d8e9067e3704';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1ff7c669-d7c8-46b3-96f9-214987cc9936';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'open_readspeaker-open_readspeaker_ui';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1ff7c669-d7c8-46b3-96f9-214987cc9936';
  $display->content['new-1ff7c669-d7c8-46b3-96f9-214987cc9936'] = $pane;
  $display->panels['content'][0] = 'new-1ff7c669-d7c8-46b3-96f9-214987cc9936';
  $pane = new stdClass();
  $pane->pid = 'new-fba04577-e98d-48e1-b087-ba40a5f65233';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fba04577-e98d-48e1-b087-ba40a5f65233';
  $display->content['new-fba04577-e98d-48e1-b087-ba40a5f65233'] = $pane;
  $display->panels['content'][1] = 'new-fba04577-e98d-48e1-b087-ba40a5f65233';
  $pane = new stdClass();
  $pane->pid = 'new-f62ae4dc-eef4-481e-a662-82f43e6f2533';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'crumbs-breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f62ae4dc-eef4-481e-a662-82f43e6f2533';
  $display->content['new-f62ae4dc-eef4-481e-a662-82f43e6f2533'] = $pane;
  $display->panels['content'][2] = 'new-f62ae4dc-eef4-481e-a662-82f43e6f2533';
  $pane = new stdClass();
  $pane->pid = 'new-56f243aa-ccb4-4f68-a94e-748f230d87bf';
  $pane->panel = 'content';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h2',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '56f243aa-ccb4-4f68-a94e-748f230d87bf';
  $display->content['new-56f243aa-ccb4-4f68-a94e-748f230d87bf'] = $pane;
  $display->panels['content'][3] = 'new-56f243aa-ccb4-4f68-a94e-748f230d87bf';
  $pane = new stdClass();
  $pane->pid = 'new-8c3a2fe0-047d-4d22-8fe9-b02bfb21fd72';
  $pane->panel = 'content';
  $pane->type = 'token';
  $pane->subtype = 'node:field_location_tag';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8c3a2fe0-047d-4d22-8fe9-b02bfb21fd72';
  $display->content['new-8c3a2fe0-047d-4d22-8fe9-b02bfb21fd72'] = $pane;
  $display->panels['content'][4] = 'new-8c3a2fe0-047d-4d22-8fe9-b02bfb21fd72';
  $pane = new stdClass();
  $pane->pid = 'new-04478b54-d0e0-4fe4-bb1d-2ae6d3daf430';
  $pane->panel = 'content';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '04478b54-d0e0-4fe4-bb1d-2ae6d3daf430';
  $display->content['new-04478b54-d0e0-4fe4-bb1d-2ae6d3daf430'] = $pane;
  $display->panels['content'][5] = 'new-04478b54-d0e0-4fe4-bb1d-2ae6d3daf430';
  $pane = new stdClass();
  $pane->pid = 'new-7929e0f0-73c9-4408-9839-4cbb961572cb';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '7929e0f0-73c9-4408-9839-4cbb961572cb';
  $display->content['new-7929e0f0-73c9-4408-9839-4cbb961572cb'] = $pane;
  $display->panels['content'][6] = 'new-7929e0f0-73c9-4408-9839-4cbb961572cb';
  $pane = new stdClass();
  $pane->pid = 'new-e009f56f-6210-4e44-b6a3-9401038a4aca';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_social-easy_social_block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'e009f56f-6210-4e44-b6a3-9401038a4aca';
  $display->content['new-e009f56f-6210-4e44-b6a3-9401038a4aca'] = $pane;
  $display->panels['content'][7] = 'new-e009f56f-6210-4e44-b6a3-9401038a4aca';
  $pane = new stdClass();
  $pane->pid = 'new-5e28fddb-9706-462f-a863-9bc4d41afc7f';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5e28fddb-9706-462f-a863-9bc4d41afc7f';
  $display->content['new-5e28fddb-9706-462f-a863-9bc4d41afc7f'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-5e28fddb-9706-462f-a863-9bc4d41afc7f';
  $pane = new stdClass();
  $pane->pid = 'new-79d56e75-8f69-4a86-b1ea-784b16f31e36';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views';
  $pane->subtype = 'content_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '79d56e75-8f69-4a86-b1ea-784b16f31e36';
  $display->content['new-79d56e75-8f69-4a86-b1ea-784b16f31e36'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-79d56e75-8f69-4a86-b1ea-784b16f31e36';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Ministerial home page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%term:field-full-name',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              2 => '2',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:field-full-name';
  $display->uuid = 'faa73911-7cd7-4040-a013-efce5a4e398c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-67b734e5-a0cf-4e62-baf6-a67e14776e03';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67b734e5-a0cf-4e62-baf6-a67e14776e03';
  $display->content['new-67b734e5-a0cf-4e62-baf6-a67e14776e03'] = $pane;
  $display->panels['content'][0] = 'new-67b734e5-a0cf-4e62-baf6-a67e14776e03';
  $pane = new stdClass();
  $pane->pid = 'new-15695430-662a-4413-b4e4-971f4f4c2473';
  $pane->panel = 'content';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h2',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '15695430-662a-4413-b4e4-971f4f4c2473';
  $display->content['new-15695430-662a-4413-b4e4-971f4f4c2473'] = $pane;
  $display->panels['content'][1] = 'new-15695430-662a-4413-b4e4-971f4f4c2473';
  $pane = new stdClass();
  $pane->pid = 'new-fd14c9b0-b488-45e7-a422-44e4e42dc9f7';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_responsibilities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fd14c9b0-b488-45e7-a422-44e4e42dc9f7';
  $display->content['new-fd14c9b0-b488-45e7-a422-44e4e42dc9f7'] = $pane;
  $display->panels['content'][2] = 'new-fd14c9b0-b488-45e7-a422-44e4e42dc9f7';
  $pane = new stdClass();
  $pane->pid = 'new-ef86d701-a816-4b1e-ac6c-f021a32edb6f';
  $pane->panel = 'content';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ef86d701-a816-4b1e-ac6c-f021a32edb6f';
  $display->content['new-ef86d701-a816-4b1e-ac6c-f021a32edb6f'] = $pane;
  $display->panels['content'][3] = 'new-ef86d701-a816-4b1e-ac6c-f021a32edb6f';
  $pane = new stdClass();
  $pane->pid = 'new-90570eec-0476-4e95-b248-6c1974b36627';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_all_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '90570eec-0476-4e95-b248-6c1974b36627';
  $display->content['new-90570eec-0476-4e95-b248-6c1974b36627'] = $pane;
  $display->panels['content'][4] = 'new-90570eec-0476-4e95-b248-6c1974b36627';
  $pane = new stdClass();
  $pane->pid = 'new-f09c017a-ef42-4d06-b3d1-266229a5d439';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'ministers/joyce',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Joyce extra media text',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>For information relating to the <a href="http://minister.agriculture.gov.au/joyce/Pages/default.aspx">Hon. Barnaby Joyce MP as Minister for Agriculture and Water Resources</a>.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f09c017a-ef42-4d06-b3d1-266229a5d439';
  $display->content['new-f09c017a-ef42-4d06-b3d1-266229a5d439'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-f09c017a-ef42-4d06-b3d1-266229a5d439';
  $pane = new stdClass();
  $pane->pid = 'new-09d0d2b7-656c-48ce-ae3b-3f775433ae75';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '09d0d2b7-656c-48ce-ae3b-3f775433ae75';
  $display->content['new-09d0d2b7-656c-48ce-ae3b-3f775433ae75'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-09d0d2b7-656c-48ce-ae3b-3f775433ae75';
  $pane = new stdClass();
  $pane->pid = 'new-26d5ee4a-aff7-4625-b113-52865b9d06d5';
  $pane->panel = 'sidebar_right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Website survey',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>How can we make it easier for you to use our website?</h2>

<p>Please tell us how we can make it easy and simple to get the information you need. Please <a href="https://consult.industry.gov.au/site-feedback/6be4b2b6" style="text-decoration: underline" target="_blank">take part in the survey</a> to provide your feedback. The survey only takes 5 minutes.</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '26d5ee4a-aff7-4625-b113-52865b9d06d5';
  $display->content['new-26d5ee4a-aff7-4625-b113-52865b9d06d5'] = $pane;
  $display->panels['sidebar_right'][2] = 'new-26d5ee4a-aff7-4625-b113-52865b9d06d5';
  $pane = new stdClass();
  $pane->pid = 'new-b2e0ef0d-f5b3-4431-a148-03f312a55e9c';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b2e0ef0d-f5b3-4431-a148-03f312a55e9c';
  $display->content['new-b2e0ef0d-f5b3-4431-a148-03f312a55e9c'] = $pane;
  $display->panels['sidebar_right'][3] = 'new-b2e0ef0d-f5b3-4431-a148-03f312a55e9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function viewsforgovcms_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_ministers';
  $page->task = 'page';
  $page->admin_title = 'All Ministers';
  $page->admin_description = 'Displays all the ministers in a grid or list.';
  $page->path = 'content/ministers';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_ministers_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'all_ministers';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'All Ministers';
  $display->uuid = '55fe72eb-88a3-4802-a062-e3d52ebc96a3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_all_ministers_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a88ab545-0fa8-4ea5-ae8b-788a72cdcdc6';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a88ab545-0fa8-4ea5-ae8b-788a72cdcdc6';
  $display->content['new-a88ab545-0fa8-4ea5-ae8b-788a72cdcdc6'] = $pane;
  $display->panels['middle'][0] = 'new-a88ab545-0fa8-4ea5-ae8b-788a72cdcdc6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a88ab545-0fa8-4ea5-ae8b-788a72cdcdc6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_ministers'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive_2014';
  $page->task = 'page';
  $page->admin_title = 'Archive';
  $page->admin_description = '';
  $page->path = 'archive';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_archive_2014_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'archive_2014';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'naked-no-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7a45da7d-4cfb-4be4-8e36-e122b184a638';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_archive_2014_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a10b8ac2-85b9-4167-9a9f-515858ecb951';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Material from ministers from the former departments of Innovation, Industry, Climate Change, Science, Research and Tertiary Education are available at <a href="http://archive.industry.gov.au/">http://archive.industry.gov.au</a>.</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a10b8ac2-85b9-4167-9a9f-515858ecb951';
  $display->content['new-a10b8ac2-85b9-4167-9a9f-515858ecb951'] = $pane;
  $display->panels['content'][0] = 'new-a10b8ac2-85b9-4167-9a9f-515858ecb951';
  $pane = new stdClass();
  $pane->pid = 'new-88d116ce-13de-480f-8380-2eb6853c9c8d';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Links',
    'title' => '',
    'body' => '<ul>
<li><a href="#canavan">Senator the Hon Matt Canavan</a></li>
	<li><a href="#hunt">The Hon Greg Hunt MP</a></li>
	<li><a href="#pyne">The Hon Christopher Pyne MP</a></li>
	<li><a href="#frydenburg">The Hon Josh Frydenberg MP</a></li>
	<li><a href="#andrews">The Hon Karen Andrews MP</a></li>
	<li><a href="#roy">The Hon Wyatt Roy MP</a></li>
	<li><a href="#macfarlane">The Hon Ian Macfarlane MP</a></li>
	<li><a href="#baldwin">The Hon Bob Baldwin MP</a></li>
</ul>
',
    'format' => 'author',
    'substitute' => TRUE,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '88d116ce-13de-480f-8380-2eb6853c9c8d';
  $display->content['new-88d116ce-13de-480f-8380-2eb6853c9c8d'] = $pane;
  $display->panels['content'][1] = 'new-88d116ce-13de-480f-8380-2eb6853c9c8d';
  $pane = new stdClass();
  $pane->pid = 'new-b9badb1a-c6a4-41fd-9a9b-e048d107ac9a';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'Canavan',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'canavan',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b9badb1a-c6a4-41fd-9a9b-e048d107ac9a';
  $display->content['new-b9badb1a-c6a4-41fd-9a9b-e048d107ac9a'] = $pane;
  $display->panels['content'][2] = 'new-b9badb1a-c6a4-41fd-9a9b-e048d107ac9a';
  $pane = new stdClass();
  $pane->pid = 'new-20ef3bdf-5ad0-465a-ba7e-3fd40a693ca2';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'hunt',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'hunt',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '20ef3bdf-5ad0-465a-ba7e-3fd40a693ca2';
  $display->content['new-20ef3bdf-5ad0-465a-ba7e-3fd40a693ca2'] = $pane;
  $display->panels['content'][3] = 'new-20ef3bdf-5ad0-465a-ba7e-3fd40a693ca2';
  $pane = new stdClass();
  $pane->pid = 'new-7d2c7306-1d23-446a-bbb1-cb17e5b71028';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'pyne',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'pyne',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7d2c7306-1d23-446a-bbb1-cb17e5b71028';
  $display->content['new-7d2c7306-1d23-446a-bbb1-cb17e5b71028'] = $pane;
  $display->panels['content'][4] = 'new-7d2c7306-1d23-446a-bbb1-cb17e5b71028';
  $pane = new stdClass();
  $pane->pid = 'new-b138951a-4411-4f16-83b1-c2cc4522ccb3';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'Frydenberg',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'frydenburg',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b138951a-4411-4f16-83b1-c2cc4522ccb3';
  $display->content['new-b138951a-4411-4f16-83b1-c2cc4522ccb3'] = $pane;
  $display->panels['content'][5] = 'new-b138951a-4411-4f16-83b1-c2cc4522ccb3';
  $pane = new stdClass();
  $pane->pid = 'new-c49bb2a3-69b5-4098-8033-bc4a9faf730f';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'andrews',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'andrews',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c49bb2a3-69b5-4098-8033-bc4a9faf730f';
  $display->content['new-c49bb2a3-69b5-4098-8033-bc4a9faf730f'] = $pane;
  $display->panels['content'][6] = 'new-c49bb2a3-69b5-4098-8033-bc4a9faf730f';
  $pane = new stdClass();
  $pane->pid = 'new-751d8859-2ee3-4b9c-bc44-baf7b576242e';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'Roy',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'roy',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '751d8859-2ee3-4b9c-bc44-baf7b576242e';
  $display->content['new-751d8859-2ee3-4b9c-bc44-baf7b576242e'] = $pane;
  $display->panels['content'][7] = 'new-751d8859-2ee3-4b9c-bc44-baf7b576242e';
  $pane = new stdClass();
  $pane->pid = 'new-db959c3e-4e2e-4b02-8a55-a2c19392f4ce';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'Macfarlane',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'macfarlane',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'db959c3e-4e2e-4b02-8a55-a2c19392f4ce';
  $display->content['new-db959c3e-4e2e-4b02-8a55-a2c19392f4ce'] = $pane;
  $display->panels['content'][8] = 'new-db959c3e-4e2e-4b02-8a55-a2c19392f4ce';
  $pane = new stdClass();
  $pane->pid = 'new-5d82e7c9-b023-48db-939b-2d0b3e2eb6b7';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-content_items_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_minister_tid' => 'baldwin',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'baldwin',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '5d82e7c9-b023-48db-939b-2d0b3e2eb6b7';
  $display->content['new-5d82e7c9-b023-48db-939b-2d0b3e2eb6b7'] = $pane;
  $display->panels['content'][9] = 'new-5d82e7c9-b023-48db-939b-2d0b3e2eb6b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive_2014'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'baldwin';
  $page->task = 'page';
  $page->admin_title = 'baldwin';
  $page->admin_description = '';
  $page->path = 'archive/baldwin';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_baldwin__panel';
  $handler->task = 'page';
  $handler->subtask = 'baldwin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bbcf2208-71bc-4ec3-9ad5-94d71f46e32d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_baldwin__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-90509e76-7cea-4bdf-83d5-fc69a75cfbe4';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Material from ministers from the former departments of Innovation, Industry, Climate Change, Science, Research and Tertiary Education are available at&nbsp;<a class="extlink" href="http://archive.industry.gov.au/" style="margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: rgb(0, 116, 189); text-decoration: none; font-family: \'Lucida Grande\', \'Lucida Sans Unicode\', sans-serif; font-size: 13.008px; line-height: 20.0063px; background-color: rgb(255, 255, 255);" target="_blank">http://archive.industry.gov.au</a>.</p>
',
    'format' => 'author',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '90509e76-7cea-4bdf-83d5-fc69a75cfbe4';
  $display->content['new-90509e76-7cea-4bdf-83d5-fc69a75cfbe4'] = $pane;
  $display->panels['middle'][0] = 'new-90509e76-7cea-4bdf-83d5-fc69a75cfbe4';
  $pane = new stdClass();
  $pane->pid = 'new-255e8b2e-7b88-4e16-a042-5a5efc45ede5';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><a href="/archive">All</a></p>

<p><a href="/archive/macfarlane">The Hon Ian Macfarlane MP</a></p>

<p><a href="/archive/baldwin">The Hon Bob Baldwin MP</a></p>

<p><a href="/archive/roy">The Hon Wyatt Roy MP</a></p>
',
    'format' => 'author',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '255e8b2e-7b88-4e16-a042-5a5efc45ede5';
  $display->content['new-255e8b2e-7b88-4e16-a042-5a5efc45ede5'] = $pane;
  $display->panels['middle'][1] = 'new-255e8b2e-7b88-4e16-a042-5a5efc45ede5';
  $pane = new stdClass();
  $pane->pid = 'new-03e76173-1192-43e8-babc-14f9cd5cc2a6';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'content_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '03e76173-1192-43e8-babc-14f9cd5cc2a6';
  $display->content['new-03e76173-1192-43e8-babc-14f9cd5cc2a6'] = $pane;
  $display->panels['middle'][2] = 'new-03e76173-1192-43e8-babc-14f9cd5cc2a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['baldwin'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'content_types';
  $page->task = 'page';
  $page->admin_title = 'Content types - by minister';
  $page->admin_description = 'Displays content types (media releases, articles etc.) per minister.';
  $page->path = 'ministers/%minister/%type';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'minister' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          2 => '2',
          3 => 0,
          1 => 0,
          4 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
    'type' => array(
      'id' => 1,
      'identifier' => 'type',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_types_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'content_types';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_page_title_state' => 1,
    'panels_page_title' => '%minister:field-full-name',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => 'ministers/*/media_releases
ministers/*/speeches
ministers/*/transcripts
ministers/*/articles',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Media Releases - Listed by Minister';
  $display->uuid = '9764c6b4-0b10-4ce6-9372-d6f3a08e205e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_types_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-589c29d5-c545-43c6-bb54-89d9a3cc9a7a';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_types-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '%title',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '589c29d5-c545-43c6-bb54-89d9a3cc9a7a';
  $display->content['new-589c29d5-c545-43c6-bb54-89d9a3cc9a7a'] = $pane;
  $display->panels['content'][0] = 'new-589c29d5-c545-43c6-bb54-89d9a3cc9a7a';
  $pane = new stdClass();
  $pane->pid = 'new-29cdcd51-8097-41d0-8484-a4e739af7303';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29cdcd51-8097-41d0-8484-a4e739af7303';
  $display->content['new-29cdcd51-8097-41d0-8484-a4e739af7303'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-29cdcd51-8097-41d0-8484-a4e739af7303';
  $pane = new stdClass();
  $pane->pid = 'new-efe8481d-cdcc-4487-b182-01eab5549b24';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'efe8481d-cdcc-4487-b182-01eab5549b24';
  $display->content['new-efe8481d-cdcc-4487-b182-01eab5549b24'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-efe8481d-cdcc-4487-b182-01eab5549b24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_types_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'content_types';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Media Releases',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'ministers/*/media_releases',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%minister:field-full-name Media Releases';
  $display->uuid = 'c30da6f1-3594-4e06-94c7-af18977a774d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_types_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-469daff5-3dea-47e2-ab3f-bae274381cb1';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '469daff5-3dea-47e2-ab3f-bae274381cb1';
  $display->content['new-469daff5-3dea-47e2-ab3f-bae274381cb1'] = $pane;
  $display->panels['content'][0] = 'new-469daff5-3dea-47e2-ab3f-bae274381cb1';
  $pane = new stdClass();
  $pane->pid = 'new-fe235d06-00c4-49a2-b878-43fc6909c226';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>%minister:field-full-name Media Releases</h2>
',
    'format' => 'author',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fe235d06-00c4-49a2-b878-43fc6909c226';
  $display->content['new-fe235d06-00c4-49a2-b878-43fc6909c226'] = $pane;
  $display->panels['content'][1] = 'new-fe235d06-00c4-49a2-b878-43fc6909c226';
  $pane = new stdClass();
  $pane->pid = 'new-7d8c26ef-8b05-44c7-8eda-db13f7f4806c';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_types-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7d8c26ef-8b05-44c7-8eda-db13f7f4806c';
  $display->content['new-7d8c26ef-8b05-44c7-8eda-db13f7f4806c'] = $pane;
  $display->panels['content'][2] = 'new-7d8c26ef-8b05-44c7-8eda-db13f7f4806c';
  $pane = new stdClass();
  $pane->pid = 'new-15c18c64-29ac-4590-b3a6-f8955837ac58';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '15c18c64-29ac-4590-b3a6-f8955837ac58';
  $display->content['new-15c18c64-29ac-4590-b3a6-f8955837ac58'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-15c18c64-29ac-4590-b3a6-f8955837ac58';
  $pane = new stdClass();
  $pane->pid = 'new-ad3a6764-9538-475d-8d57-c282488e8472';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ad3a6764-9538-475d-8d57-c282488e8472';
  $display->content['new-ad3a6764-9538-475d-8d57-c282488e8472'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-ad3a6764-9538-475d-8d57-c282488e8472';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_types_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'content_types';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Speeches',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'ministers/*/speeches',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%minister:field-full-name Speeches';
  $display->uuid = '62df6ac1-b7db-4928-8863-9f8c9525a849';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_types_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-724e774b-021e-4b0c-97dc-af13f2e37c6b';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '724e774b-021e-4b0c-97dc-af13f2e37c6b';
  $display->content['new-724e774b-021e-4b0c-97dc-af13f2e37c6b'] = $pane;
  $display->panels['content'][0] = 'new-724e774b-021e-4b0c-97dc-af13f2e37c6b';
  $pane = new stdClass();
  $pane->pid = 'new-b9d31fb6-3d6c-4063-9e6c-6f75d6676f4e';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>%minister:field-full-name Speeches</h2>
',
    'format' => 'author',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b9d31fb6-3d6c-4063-9e6c-6f75d6676f4e';
  $display->content['new-b9d31fb6-3d6c-4063-9e6c-6f75d6676f4e'] = $pane;
  $display->panels['content'][1] = 'new-b9d31fb6-3d6c-4063-9e6c-6f75d6676f4e';
  $pane = new stdClass();
  $pane->pid = 'new-1f21f603-1b35-4e7c-8763-ec721ab38590';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_types-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1f21f603-1b35-4e7c-8763-ec721ab38590';
  $display->content['new-1f21f603-1b35-4e7c-8763-ec721ab38590'] = $pane;
  $display->panels['content'][2] = 'new-1f21f603-1b35-4e7c-8763-ec721ab38590';
  $pane = new stdClass();
  $pane->pid = 'new-24f531d7-9280-4b2b-84bf-1c990fd8b8db';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '24f531d7-9280-4b2b-84bf-1c990fd8b8db';
  $display->content['new-24f531d7-9280-4b2b-84bf-1c990fd8b8db'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-24f531d7-9280-4b2b-84bf-1c990fd8b8db';
  $pane = new stdClass();
  $pane->pid = 'new-b43bec18-2c54-448c-bc5b-71dfa754a922';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b43bec18-2c54-448c-bc5b-71dfa754a922';
  $display->content['new-b43bec18-2c54-448c-bc5b-71dfa754a922'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-b43bec18-2c54-448c-bc5b-71dfa754a922';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_types_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'content_types';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Transcripts',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'ministers/*/transcripts',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%minister:field-full-name Transcripts';
  $display->uuid = '1e84df22-4dcd-43d8-aa46-9a4e45140440';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_types_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-168c550a-f100-4878-9390-bbb086af0150';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '168c550a-f100-4878-9390-bbb086af0150';
  $display->content['new-168c550a-f100-4878-9390-bbb086af0150'] = $pane;
  $display->panels['content'][0] = 'new-168c550a-f100-4878-9390-bbb086af0150';
  $pane = new stdClass();
  $pane->pid = 'new-406a501d-8ba9-4c0a-96e9-e76d0d908d44';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>%minister:field-full-name Transcripts</h2>
',
    'format' => 'author',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '406a501d-8ba9-4c0a-96e9-e76d0d908d44';
  $display->content['new-406a501d-8ba9-4c0a-96e9-e76d0d908d44'] = $pane;
  $display->panels['content'][1] = 'new-406a501d-8ba9-4c0a-96e9-e76d0d908d44';
  $pane = new stdClass();
  $pane->pid = 'new-236df22f-ee97-43f0-b532-53fd7988341a';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_types-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '236df22f-ee97-43f0-b532-53fd7988341a';
  $display->content['new-236df22f-ee97-43f0-b532-53fd7988341a'] = $pane;
  $display->panels['content'][2] = 'new-236df22f-ee97-43f0-b532-53fd7988341a';
  $pane = new stdClass();
  $pane->pid = 'new-e109c6a2-f822-43d0-8b2b-509a2e5ecdca';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e109c6a2-f822-43d0-8b2b-509a2e5ecdca';
  $display->content['new-e109c6a2-f822-43d0-8b2b-509a2e5ecdca'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-e109c6a2-f822-43d0-8b2b-509a2e5ecdca';
  $pane = new stdClass();
  $pane->pid = 'new-f2bd84e5-c9b0-4d4b-a007-8eeb71c1a6ac';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f2bd84e5-c9b0-4d4b-a007-8eeb71c1a6ac';
  $display->content['new-f2bd84e5-c9b0-4d4b-a007-8eeb71c1a6ac'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-f2bd84e5-c9b0-4d4b-a007-8eeb71c1a6ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-236df22f-ee97-43f0-b532-53fd7988341a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_types__articles';
  $handler->task = 'page';
  $handler->subtask = 'content_types';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Articles',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'ministers/*/articles',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'articles',
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%minister:field-full-name Articles';
  $display->uuid = 'c30da6f1-3594-4e06-94c7-af18977a774d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_types__articles';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ea96146f-8338-4053-90b4-a0da71ae7f58';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ea96146f-8338-4053-90b4-a0da71ae7f58';
  $display->content['new-ea96146f-8338-4053-90b4-a0da71ae7f58'] = $pane;
  $display->panels['content'][0] = 'new-ea96146f-8338-4053-90b4-a0da71ae7f58';
  $pane = new stdClass();
  $pane->pid = 'new-f3ed9533-e50b-421c-9dae-a00def70b284';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2>%minister:field-full-name Articles</h2>
',
    'format' => 'author',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f3ed9533-e50b-421c-9dae-a00def70b284';
  $display->content['new-f3ed9533-e50b-421c-9dae-a00def70b284'] = $pane;
  $display->panels['content'][1] = 'new-f3ed9533-e50b-421c-9dae-a00def70b284';
  $pane = new stdClass();
  $pane->pid = 'new-bc5de5d1-46bd-4f85-ae3f-80ee681289a4';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_types-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bc5de5d1-46bd-4f85-ae3f-80ee681289a4';
  $display->content['new-bc5de5d1-46bd-4f85-ae3f-80ee681289a4'] = $pane;
  $display->panels['content'][2] = 'new-bc5de5d1-46bd-4f85-ae3f-80ee681289a4';
  $pane = new stdClass();
  $pane->pid = 'new-ebaea2bd-7074-4806-add6-acf2dde831ee';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ebaea2bd-7074-4806-add6-acf2dde831ee';
  $display->content['new-ebaea2bd-7074-4806-add6-acf2dde831ee'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-ebaea2bd-7074-4806-add6-acf2dde831ee';
  $pane = new stdClass();
  $pane->pid = 'new-32e20f51-0254-4e83-ba72-e5854ff1140c';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '32e20f51-0254-4e83-ba72-e5854ff1140c';
  $display->content['new-32e20f51-0254-4e83-ba72-e5854ff1140c'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-32e20f51-0254-4e83-ba72-e5854ff1140c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['content_types'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'content_types_unsorted';
  $page->task = 'page';
  $page->admin_title = 'Content types - unsorted';
  $page->admin_description = 'This panel displays various content types, unsorted. For example, all articles, all transcripts etc.';
  $page->path = 'ministers/%type';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'type' => array(
      'id' => 1,
      'identifier' => 'Content type',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_types_unsorted_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'content_types_unsorted';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '!=',
            'value' => 'galleries',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0da68210-8f7b-4848-8e92-da27a5ecf2ec';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_types_unsorted_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ae75b3c6-5893-4a04-9e51-1710e80af4e0';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'easy_breadcrumb-easy_breadcrumb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ae75b3c6-5893-4a04-9e51-1710e80af4e0';
  $display->content['new-ae75b3c6-5893-4a04-9e51-1710e80af4e0'] = $pane;
  $display->panels['content'][0] = 'new-ae75b3c6-5893-4a04-9e51-1710e80af4e0';
  $pane = new stdClass();
  $pane->pid = 'new-72b9ab01-290c-468a-b4ce-b805702524fc';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_types-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link_to_view' => 0,
    'more_link' => 0,
    'use_pager' => 1,
    'pager_id' => '0',
    'items_per_page' => '10',
    'offset' => '0',
    'path' => '',
    'fields_override' => array(
      'title' => 1,
      'field_date_and_time' => 1,
      'body' => 1,
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '72b9ab01-290c-468a-b4ce-b805702524fc';
  $display->content['new-72b9ab01-290c-468a-b4ce-b805702524fc'] = $pane;
  $display->panels['content'][1] = 'new-72b9ab01-290c-468a-b4ce-b805702524fc';
  $pane = new stdClass();
  $pane->pid = 'new-6222b73f-f8cf-4988-93d1-c5add7a61041';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6222b73f-f8cf-4988-93d1-c5add7a61041';
  $display->content['new-6222b73f-f8cf-4988-93d1-c5add7a61041'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-6222b73f-f8cf-4988-93d1-c5add7a61041';
  $pane = new stdClass();
  $pane->pid = 'new-d3d5b029-76e1-49b1-9c57-41f9c85872c6';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd3d5b029-76e1-49b1-9c57-41f9c85872c6';
  $display->content['new-d3d5b029-76e1-49b1-9c57-41f9c85872c6'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-d3d5b029-76e1-49b1-9c57-41f9c85872c6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-72b9ab01-290c-468a-b4ce-b805702524fc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_content_types_unsorted_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'content_types_unsorted';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Galleries',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'galleries',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '36cd14db-f345-4a8b-a371-86ff855ca7d4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_content_types_unsorted_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-67b18568-6323-4193-950b-a37fd237db67';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'galleries_collections_-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '67b18568-6323-4193-950b-a37fd237db67';
  $display->content['new-67b18568-6323-4193-950b-a37fd237db67'] = $pane;
  $display->panels['content'][0] = 'new-67b18568-6323-4193-950b-a37fd237db67';
  $pane = new stdClass();
  $pane->pid = 'new-0b44dcdf-d841-46e5-87e0-f78116355402';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0b44dcdf-d841-46e5-87e0-f78116355402';
  $display->content['new-0b44dcdf-d841-46e5-87e0-f78116355402'] = $pane;
  $display->panels['content'][1] = 'new-0b44dcdf-d841-46e5-87e0-f78116355402';
  $pane = new stdClass();
  $pane->pid = 'new-474abe4c-98e6-456f-9dd7-4d59ac615b11';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '474abe4c-98e6-456f-9dd7-4d59ac615b11';
  $display->content['new-474abe4c-98e6-456f-9dd7-4d59ac615b11'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-474abe4c-98e6-456f-9dd7-4d59ac615b11';
  $pane = new stdClass();
  $pane->pid = 'new-ac31d474-d125-4bed-8959-71f7a1b37cc3';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ac31d474-d125-4bed-8959-71f7a1b37cc3';
  $display->content['new-ac31d474-d125-4bed-8959-71f7a1b37cc3'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-ac31d474-d125-4bed-8959-71f7a1b37cc3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['content_types_unsorted'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'galleries';
  $page->task = 'page';
  $page->admin_title = 'Galleries';
  $page->admin_description = 'This collection of variants displays gallery content';
  $page->path = 'ministers/%minister/galleries/!collection';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'minister' => array(
      'id' => 1,
      'identifier' => 'Taxonomy: Minister',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          2 => '2',
          3 => 0,
          5 => 0,
          1 => 0,
          4 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
    'collection' => array(
      'id' => 2,
      'identifier' => 'Taxonomy: Collection',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          3 => '3',
          5 => 0,
          2 => 0,
          1 => 0,
          4 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_galleries_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'galleries';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'naked-sidebar-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'content' => NULL,
      'sidebar_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%minister:field-full-name: %collection:name';
  $display->uuid = '6c5e80db-d801-45ef-8448-b03403aa8350';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_galleries_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-245a6785-6acc-4169-a067-c7e8ff088941';
  $pane->panel = 'content';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '245a6785-6acc-4169-a067-c7e8ff088941';
  $display->content['new-245a6785-6acc-4169-a067-c7e8ff088941'] = $pane;
  $display->panels['content'][0] = 'new-245a6785-6acc-4169-a067-c7e8ff088941';
  $pane = new stdClass();
  $pane->pid = 'new-4c4ee97d-1923-4649-919f-48d63ef2e46e';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>%collection:name&nbsp;</p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4c4ee97d-1923-4649-919f-48d63ef2e46e';
  $display->content['new-4c4ee97d-1923-4649-919f-48d63ef2e46e'] = $pane;
  $display->panels['content'][1] = 'new-4c4ee97d-1923-4649-919f-48d63ef2e46e';
  $pane = new stdClass();
  $pane->pid = 'new-3b370f6b-bba2-4eaa-ae9a-b8e49507cb3a';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_date_and_time';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'general',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'argument_term_2',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3b370f6b-bba2-4eaa-ae9a-b8e49507cb3a';
  $display->content['new-3b370f6b-bba2-4eaa-ae9a-b8e49507cb3a'] = $pane;
  $display->panels['content'][2] = 'new-3b370f6b-bba2-4eaa-ae9a-b8e49507cb3a';
  $pane = new stdClass();
  $pane->pid = 'new-b623eb58-7b17-459f-a4d2-6bed7726d226';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'galleries_collections_-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b623eb58-7b17-459f-a4d2-6bed7726d226';
  $display->content['new-b623eb58-7b17-459f-a4d2-6bed7726d226'] = $pane;
  $display->panels['content'][3] = 'new-b623eb58-7b17-459f-a4d2-6bed7726d226';
  $pane = new stdClass();
  $pane->pid = 'new-1b1aee17-0382-450b-bf7d-13fcbac96aee';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'galleries_items_-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1b1aee17-0382-450b-bf7d-13fcbac96aee';
  $display->content['new-1b1aee17-0382-450b-bf7d-13fcbac96aee'] = $pane;
  $display->panels['content'][4] = 'new-1b1aee17-0382-450b-bf7d-13fcbac96aee';
  $pane = new stdClass();
  $pane->pid = 'new-b1b3facc-23fa-45f3-ad63-6922b1755b2d';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'ministers-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b1b3facc-23fa-45f3-ad63-6922b1755b2d';
  $display->content['new-b1b3facc-23fa-45f3-ad63-6922b1755b2d'] = $pane;
  $display->panels['sidebar_right'][0] = 'new-b1b3facc-23fa-45f3-ad63-6922b1755b2d';
  $pane = new stdClass();
  $pane->pid = 'new-670649d9-62d2-455f-887e-b62c970c04f3';
  $pane->panel = 'sidebar_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'content_items-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '670649d9-62d2-455f-887e-b62c970c04f3';
  $display->content['new-670649d9-62d2-455f-887e-b62c970c04f3'] = $pane;
  $display->panels['sidebar_right'][1] = 'new-670649d9-62d2-455f-887e-b62c970c04f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['galleries'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'The home page for the ministerial site.';
  $page->path = 'front';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Home',
    'name' => 'menu-top-menu-right',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'default' => NULL,
      'top-content' => NULL,
      'content' => NULL,
    ),
    'main-content' => array(
      'style' => 'default',
    ),
    'sidebar-right' => array(
      'style' => 'default',
    ),
    'content' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fee64335-4a75-4923-b87a-a60e3554d59b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-23ace565-6306-4e4e-9c74-57d3923f2cbb';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'ministers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23ace565-6306-4e4e-9c74-57d3923f2cbb';
  $display->content['new-23ace565-6306-4e4e-9c74-57d3923f2cbb'] = $pane;
  $display->panels['content'][0] = 'new-23ace565-6306-4e4e-9c74-57d3923f2cbb';
  $pane = new stdClass();
  $pane->pid = 'new-45743c3e-20d4-4d75-846f-73c57219379e';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'content_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '45743c3e-20d4-4d75-846f-73c57219379e';
  $display->content['new-45743c3e-20d4-4d75-846f-73c57219379e'] = $pane;
  $display->panels['content'][1] = 'new-45743c3e-20d4-4d75-846f-73c57219379e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_alternate';
  $page->task = 'page';
  $page->admin_title = 'Home - Alternate';
  $page->admin_description = 'An alternative home page for use until the site has more content in it.';
  $page->path = 'alt-home';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Home',
    'name' => 'menu-top-menu-right',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_alternate_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home_alternate';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_66_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top-content' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd0296975-141e-4817-bcb9-a9681e22c1f8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_alternate_panel_context';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_alternate'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'macfarlane';
  $page->task = 'page';
  $page->admin_title = 'macfarlane';
  $page->admin_description = '';
  $page->path = 'archive/macfarlane';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_macfarlane__panel';
  $handler->task = 'page';
  $handler->subtask = 'macfarlane';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main-content' => NULL,
      'sidebar-right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ac5c3a1f-e67b-4bf6-9c78-d30bdfd05a6c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_macfarlane__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-afc35bb7-f51e-497f-a6dc-077bc49acf8f';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Material from ministers from the former departments of Innovation, Industry, Climate Change, Science, Research and Tertiary Education are available at&nbsp;<a class="extlink" href="http://archive.industry.gov.au/" style="margin: 0px; padding: 0px; border: 0px; vertical-align: baseline; color: rgb(0, 116, 189); text-decoration: none; font-family: \'Lucida Grande\', \'Lucida Sans Unicode\', sans-serif; font-size: 13.008px; line-height: 20.0063px; background-color: rgb(255, 255, 255);" target="_blank">http://archive.industry.gov.au</a>.</p>
',
    'format' => 'author',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'afc35bb7-f51e-497f-a6dc-077bc49acf8f';
  $display->content['new-afc35bb7-f51e-497f-a6dc-077bc49acf8f'] = $pane;
  $display->panels['middle'][0] = 'new-afc35bb7-f51e-497f-a6dc-077bc49acf8f';
  $pane = new stdClass();
  $pane->pid = 'new-3b376d60-2f23-46bf-9078-37b26e787473';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><a href="/archive">All</a></p>

<p><a href="/archive/macfarlane">The Hon Ian Macfarlane MP</a></p>

<p><a href="/archive/baldwin">The Hon Bob Baldwin MP</a></p>

<p><a href="/archive/roy">The Hon Wyatt Roy MP</a></p>
',
    'format' => 'author',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3b376d60-2f23-46bf-9078-37b26e787473';
  $display->content['new-3b376d60-2f23-46bf-9078-37b26e787473'] = $pane;
  $display->panels['middle'][1] = 'new-3b376d60-2f23-46bf-9078-37b26e787473';
  $pane = new stdClass();
  $pane->pid = 'new-e27eb0eb-4c65-4b3f-8677-f942b41e92e9';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'content_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_7',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e27eb0eb-4c65-4b3f-8677-f942b41e92e9';
  $display->content['new-e27eb0eb-4c65-4b3f-8677-f942b41e92e9'] = $pane;
  $display->panels['middle'][2] = 'new-e27eb0eb-4c65-4b3f-8677-f942b41e92e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['macfarlane'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'roy';
  $page->task = 'page';
  $page->admin_title = 'roy';
  $page->admin_description = '';
  $page->path = 'archive/roy';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_roy__panel';
  $handler->task = 'page';
  $handler->subtask = 'roy';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'omega_12_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '811b0b36-151b-43f3-9beb-1baeebee5e5c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_roy__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6be9826e-7273-4893-af8e-1106177978d7';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Material from ministers from the former departments of Innovation, Industry, Climate Change, Science, Research and Tertiary Education are available at&nbsp;<a class="extlink" href="http://archive.industry.gov.au/" target="_blank">http://archive.industry.gov.au</a>.</p>
',
    'format' => 'author',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6be9826e-7273-4893-af8e-1106177978d7';
  $display->content['new-6be9826e-7273-4893-af8e-1106177978d7'] = $pane;
  $display->panels['middle'][0] = 'new-6be9826e-7273-4893-af8e-1106177978d7';
  $pane = new stdClass();
  $pane->pid = 'new-995c5cb9-daba-48ef-a307-1a0826b0c503';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><a href="/archive">All</a></p>

<p><a href="/archive/macfarlane">The Hon Ian Macfarlane MP</a></p>

<p><a href="/archive/baldwin">The Hon Bob Baldwin MP</a></p>

<p><a href="/archive/roy">The Hon Wyatt Roy MP</a></p>
',
    'format' => 'author',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '995c5cb9-daba-48ef-a307-1a0826b0c503';
  $display->content['new-995c5cb9-daba-48ef-a307-1a0826b0c503'] = $pane;
  $display->panels['middle'][1] = 'new-995c5cb9-daba-48ef-a307-1a0826b0c503';
  $pane = new stdClass();
  $pane->pid = 'new-65aa436a-bc98-4460-a05a-52db7d540732';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'content_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '4',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_8',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '65aa436a-bc98-4460-a05a-52db7d540732';
  $display->content['new-65aa436a-bc98-4460-a05a-52db7d540732'] = $pane;
  $display->panels['middle'][2] = 'new-65aa436a-bc98-4460-a05a-52db7d540732';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-65aa436a-bc98-4460-a05a-52db7d540732';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['roy'] = $page;

  return $pages;

}
