<?php

/**
 * Implements hook_preprocess_page().
 */
function oniri_preprocess_page(&$variables) {
  // You can use preprocess hooks to modify the variables before they are passed
  // to the theme function or template file.
drupal_add_css('http://fonts.googleapis.com/css?family=Philosopher:400,700|Lato:400,400italic,900', array('type' => 'external'));
}


