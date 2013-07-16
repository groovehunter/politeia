<?php
/**
 * @file
 * wp_semantic.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wp_semantic_taxonomy_default_vocabularies() {
  return array(
    'bed_rfnisse' => array(
      'name' => 'Bedürfnisse',
      'machine_name' => 'bed_rfnisse',
      'description' => 'Grundlegende universelle Bedürfnisse des Menschen',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'bereich' => array(
      'name' => 'Bereich',
      'machine_name' => 'bereich',
      'description' => 'Der Aspekt des Zusammenlebens',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
