<?php
function demo_entity_page(){
$projects = entity_load('project', array(1, 2));
dpm($projects);
return 'Some string';
}