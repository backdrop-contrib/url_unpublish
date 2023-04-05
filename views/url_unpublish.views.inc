<?php
/**
 * @file
 * Field handler to present a link to unpublish a node.
 *
 */

/**
 * Implements hook_views_data().
 */
function url_unpublish_views_data() {

  $data['node']['unpublish_node']['moved to'] = array(
    'views_entity_node',
    'unpublish_node',
  );
  $data['views_entity_node']['unpublish_node'] = array(
    'field' => array(
      'title' => t('Unpublish link'),
      'help' => t('Provide a simple link to unpublish the content.'),
      'handler' => 'views_handler_field_node_link_unpublish',
    ),
  );

  return $data;
}

/**
 * Implements hook_views_handlers().
 */
function url_unpublish_views_handlers() {
  return array(
    'info' => array(
      'path' => backdrop_get_path('module', 'url_unpublish') . '/views',
    ),
    'handlers' => array(
      'views_handler_field_node_link_unpublish' => array(
        'parent' => 'views_handler_field_node_link',
      ),
    ),
  );
}
