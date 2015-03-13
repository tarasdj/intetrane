<?php
function me_custom_table(){
  	
  $header = array(
    t('nid'),
    t('nodename'),
    t('timentamp'),
  ); 
  $rows = array();
  // Get all the contact categories from the database.
  $nodes = db_select('node', 'nid')
    ->fields('nid', array('nid', 'title', 'created'))
    ->execute()
    ->fetchAll();
   // Loop through the categories and add them to the table.
  foreach ($nodes as $node) {
    $rows[] = array(
    $node->nid,
    l($node->title, 'node/'.$node->nid),
    format_date($node->created),
    );
  } 	
  $build['node_table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );
  return $build;  
};

