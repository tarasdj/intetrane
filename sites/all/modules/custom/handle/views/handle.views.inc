<?php
// This file must be at mymodule/views directory.
 
/**
 * @file
 * Views definitions for mymodule module.
 */
 
/**
 * Implements hook_views_data().
 */
function handle_views_data() {
  $data = array();
  $data['node']['handlername'] = array(
    'title' => t('Name of my handler'),
    'help' => t('Description of my handler.'),
    'field' => array(
      'handler' => 'handle_handler_handlername',
    ),
  );
  return $data;
}