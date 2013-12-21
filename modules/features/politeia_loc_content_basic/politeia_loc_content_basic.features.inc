<?php
/**
 * @file
 * politeia_loc_content_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function politeia_loc_content_basic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function politeia_loc_content_basic_node_info() {
  $items = array(
    'location' => array(
      'name' => t('location'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
