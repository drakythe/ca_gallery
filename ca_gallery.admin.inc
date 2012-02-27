<?php

/** 
 * @file
 * CA_Gallery admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding news feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_gallery_settings_form() {
  $form = array();
  
  $form['ca_gallery_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_gallery_menu_title', 'Gallery'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  
  return system_settings_form($form);
}
