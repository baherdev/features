<?php
/**
 * @file
 * blog_test.features.inc
 */

/**
 * Implements hook_node_info().
 */
function blog_test_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('blog'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
