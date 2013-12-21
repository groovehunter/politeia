<?php
/**
 * @file
 * politeia_openlayer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function politeia_openlayer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}
