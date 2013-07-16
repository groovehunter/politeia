<?php
/**
 * @file
 * wir_prozesse.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wir_prozesse_taxonomy_default_vocabularies() {
  return array(
    'taxocsv1_21441' => array(
      'name' => 'Bedürfnisse',
      'machine_name' => 'taxocsv1_21441',
      'description' => 'Grundlegende universelle Bedürfnisse des Menschen',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
