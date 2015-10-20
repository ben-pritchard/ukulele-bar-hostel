<?php
/**
 * @file
 * animals.features.inc
 */

/**
 * Implements hook_node_info().
 */
function animals_node_info() {
  $items = array(
    'spotted_animal' => array(
      'name' => t('Spotted Animal'),
      'base' => 'node_content',
      'description' => t('Add a new animal that has been spotted near the hostel.'),
      'has_title' => '1',
      'title_label' => t('Type of Animal'),
      'help' => t('Enter all the information about the animal you spotted.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
