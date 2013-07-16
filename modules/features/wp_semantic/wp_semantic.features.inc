<?php
/**
 * @file
 * wp_semantic.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wp_semantic_node_info() {
  $items = array(
    'regelversto_' => array(
      'name' => t('Regelverstoß'),
      'base' => 'node_content',
      'description' => t('Eine Meldung und Verhandlung über eine Verletzung einer Vereinbarung;'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'statement' => array(
      'name' => t('Statement'),
      'base' => 'node_content',
      'description' => t('Eine Aussage : Thesen über die Welt, aufgrund derer das gemeinsame Leben aufgebaut ist.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vereinbarung' => array(
      'name' => t('Vereinbarung'),
      'base' => 'node_content',
      'description' => t('Eine Regelung bzw deren Entwurf'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vision' => array(
      'name' => t('Vision'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
