<?php
// This file must be at handle/views directory.
 
/**
 * @file
 * Definition of handle_handler_handlername.
 */
 
/**
 * Description of what my handler does.
 */
class handle_handler_handlername extends views_handler_field {
  function construct() {
	parent::construct();
	$this->additional_fields['nid'] = 'nid';
  }
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }	
  function render($values) {
	$nid = $this->get_value($values, 'nid');
    $nid = $this->sanitize_value($nid);
	drupal_add_library('system', 'drupal.ajax');
	$items = l(t('Buy'), 'ajax/handle/path/' . $nid, array('attributes' => array('class' => array('use-ajax', 'buy'))));
	return $items;
  }
}



