<?php
/**
 * @file
 * ca_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ca_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ca_gallery_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Gallery Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_gallery' => 'ca_gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Parent Gallery (field_ca_gallery_parent_gallery) */
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['id'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['table'] = 'field_data_field_ca_gallery_parent_gallery';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['field'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['group'] = 1;

  /* Display: CA Gallery: Gallery Admin */
  $handler = $view->new_display('panel_pane', 'CA Gallery: Gallery Admin', 'ca_gallery_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Gallery: Gallery Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Gallery: Sub Gallery Admin */
  $handler = $view->new_display('panel_pane', 'CA Gallery: Sub Gallery Admin', 'ca_gallery_sub_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Gallery (field_ca_gallery_parent_gallery) */
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['id'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['table'] = 'field_data_field_ca_gallery_parent_gallery';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['field'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_gallery' => 'ca_gallery',
  );
  /* Filter criterion: Content: Parent Gallery (field_ca_gallery_parent_gallery) */
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['id'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['table'] = 'field_data_field_ca_gallery_parent_gallery';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['field'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'CA Gallery: Sub Gallery Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CA Gallery: Image Admin */
  $handler = $view->new_display('panel_pane', 'CA Gallery: Image Admin', 'ca_gallery_image_admin');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Image Parent Gallery (field_ca_gallery_image_parent) */
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['id'] = 'field_ca_gallery_image_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['table'] = 'field_data_field_ca_gallery_image_parent';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['field'] = 'field_ca_gallery_image_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ca_gallery_image' => 'ca_gallery_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'CA Gallery: Image Admin';
  $handler->display->display_options['pane_category']['name'] = 'CA Admin';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['ca_gallery_admin'] = $view;

  $view = new view();
  $view->name = 'ca_gallery_image_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Gallery Image List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_g_image']['id'] = 'field_gallery_image_g_image';
  $handler->display->display_options['fields']['field_gallery_image_g_image']['table'] = 'field_data_field_gallery_image_g_image';
  $handler->display->display_options['fields']['field_gallery_image_g_image']['field'] = 'field_gallery_image_g_image';
  $handler->display->display_options['fields']['field_gallery_image_g_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image_g_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image_g_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_g_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_gallery_image_g_image']['settings'] = array(
    'colorbox_node_style' => 'default',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_g_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Image Parent Gallery (field_ca_gallery_image_parent) */
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['id'] = 'field_ca_gallery_image_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['table'] = 'field_data_field_ca_gallery_image_parent';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['field'] = 'field_ca_gallery_image_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary_options']['items_per_page'] = '25';
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
    'ca_gallery_image' => 'ca_gallery_image',
  );

  /* Display: CA Gallery: Image List View Template One */
  $handler = $view->new_display('panel_pane', 'CA Gallery: Image List View Template One', 'ca_gallery_image_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Gallery: Image List View Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_gallery_image_list'] = $view;

  $view = new view();
  $view->name = 'ca_gallery_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Gallery List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_ca_gallery_gallery_image']['id'] = 'field_ca_gallery_gallery_image';
  $handler->display->display_options['fields']['field_ca_gallery_gallery_image']['table'] = 'field_data_field_ca_gallery_gallery_image';
  $handler->display->display_options['fields']['field_ca_gallery_gallery_image']['field'] = 'field_ca_gallery_gallery_image';
  $handler->display->display_options['fields']['field_ca_gallery_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_ca_gallery_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ca_gallery_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ca_gallery_gallery_image']['settings'] = array(
    'image_style' => 'default',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ca_gallery' => 'ca_gallery',
  );
  /* Filter criterion: Content: Parent Gallery (field_ca_gallery_parent_gallery) */
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['id'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['table'] = 'field_data_field_ca_gallery_parent_gallery';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['field'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['operator'] = 'empty';

  /* Display: CA Gallery: Gallery List View Template One */
  $handler = $view->new_display('panel_pane', 'CA Gallery: Gallery List View Template One', 'ca_gallery_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'CA Gallery: Gallery List View Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Gallery: Sub Gallery View List Template One */
  $handler = $view->new_display('panel_pane', 'CA Gallery: Sub Gallery View List Template One', 'ca_gallery_sub_list_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Gallery (field_ca_gallery_parent_gallery) */
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['id'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['table'] = 'field_data_field_ca_gallery_parent_gallery';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['field'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ca_gallery' => 'ca_gallery',
  );
  $handler->display->display_options['filters']['type']['group'] = 0;
  $handler->display->display_options['pane_title'] = 'CA Gallery: Sub Gallery View List Template One';
  $handler->display->display_options['pane_category']['name'] = 'CA List';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_gallery_list'] = $view;

  $view = new view();
  $view->name = 'ca_gallery_sort';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CA Gallery Sort';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'weight' => 'weight',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ca_gallery' => 'ca_gallery',
  );

  /* Display: CA Gallery Sort: Parent Gallery Sort */
  $handler = $view->new_display('panel_pane', 'CA Gallery Sort: Parent Gallery Sort', 'ca_gallery_sort_parent_gallery_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    'ca_gallery' => 'ca_gallery',
  );
  /* Filter criterion: Content: Parent Gallery (field_ca_gallery_parent_gallery) */
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['id'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['table'] = 'field_data_field_ca_gallery_parent_gallery';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['field'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['filters']['field_ca_gallery_parent_gallery_target_id']['operator'] = 'empty';
  $handler->display->display_options['pane_title'] = 'CA Gallery Sort: Parent Gallery Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Gallery Sort: Sub-Gallery Sort */
  $handler = $view->new_display('panel_pane', 'CA Gallery Sort: Sub-Gallery Sort', 'ca_gallery_sort_sub_gallery_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Parent Gallery (field_ca_gallery_parent_gallery) */
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['id'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['table'] = 'field_data_field_ca_gallery_parent_gallery';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['field'] = 'field_ca_gallery_parent_gallery_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_gallery_parent_gallery_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'CA Gallery Sort: Sub-Gallery Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: CA Gallery Sort: Image sort */
  $handler = $view->new_display('panel_pane', 'CA Gallery Sort: Image sort', 'ca_gallery_sort_image_sort');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Image Parent Gallery (field_ca_gallery_image_parent) */
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['id'] = 'field_ca_gallery_image_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['table'] = 'field_data_field_ca_gallery_image_parent';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['field'] = 'field_ca_gallery_image_parent_target_id';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ca_gallery_image_parent_target_id']['summary_options']['items_per_page'] = '25';
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
    'ca_gallery_image' => 'ca_gallery_image',
  );
  $handler->display->display_options['pane_title'] = 'CA Gallery Sort: Image Sort';
  $handler->display->display_options['pane_category']['name'] = 'CA Sort';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ca_gallery_sort'] = $view;

  return $export;
}
