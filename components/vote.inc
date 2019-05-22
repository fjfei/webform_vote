<?php

/**
 * @file
 * Webform module vote select component.
 */

/**
 * Implements _webform_defaults_component().
 */
function _webform_defaults_vote() {
  return array(
    'name' => '',
    'form_key' => NULL,
    'required' => 0,
    'pid' => 0,
    'weight' => 0,
    'value' => '',
    'extra' => array(
      'items' => '',
      'multiple' => FALSE,
      'aslist' => TRUE,
      'empty_option' => '',
      'title_display' => 0,
      'description' => '',
      'description_above' => FALSE,
      'custom_keys' => FALSE,
      'options_source' => '',
      'private' => FALSE,
      'analysis' => TRUE,
    ),
  );
}

/**
 * Implements _webform_theme_component().
 */
/* function _webform_theme_vote() {
  return array(
    'webform_display_vote' => array(
      'render element' => 'element',
      'file' => 'components/vote.inc',
      'path' => drupal_get_path('module', 'webform_vote'),
    ),
  );
} */