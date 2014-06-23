<?php
/**
 * @file
 * leadership_programs.features.inc
 */

/**
 * Implements hook_views_api().
 */
function leadership_programs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function leadership_programs_node_info() {
  $items = array(
    'programs' => array(
      'name' => t('programs'),
      'base' => 'node_content',
      'description' => t('TFA Teacher Leadership Programs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
