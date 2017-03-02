<?php

/**
 * @file
 * Administration interfaces.
 */

/**
 * Main settings of the module.
 */
function devel_usability_settings() {
  $form['root'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['root']['robotstxt'] = array(
    '#type' => 'fieldset',
    '#title' => 'RobotsTxt',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['root']['robotstxt']['devel_usability_domain'] = array(
    '#type' => 'textfield',
    '#title' => t('Devel domain'),
    '#default_value' => variable_get('devel_usability_domain', ''),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => TRUE,
  );

  return system_settings_form($form);
}