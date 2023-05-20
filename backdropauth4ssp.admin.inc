<?php
/**
 * @file
 * Admin form for backdropauth4ssp module.
 */

/**
 * Implements settings for the module.
 */
function backdropauth4ssp_settings() {
  $form['#config'] = 'backdropauth4ssp.settings';
  $form['backdropauth4ssp_setup'] = array(
    '#type' => 'fieldset',
    '#title' => t('Basic Setup'),
    '#collapsible' => FALSE,
  );
  // TODO This variable was probably removed in Backdrop without replacement.
  $form['backdropauth4ssp_setup']['backdropauth4ssp_installdir'] = array(
    '#type' => 'textfield',
    '#title' => t('Installation directory (default: /var/simplesamlphp)'),
    '#default_value' => config_get('backdropauth4ssp.settings', 'backdropauth4ssp_installdir'),
    '#description' => t('The base directory of simpleSAMLphp. Absolute path with no trailing slash.'),
  );
  // TODO This variable was probably removed in Backdrop without replacement.
  $form['backdropauth4ssp_setup']['backdropauth4ssp_authsource'] = array(
    '#type' => 'textfield',
    '#title' => t('Authentication source (The one that uses the backdropauth:External class)'),
    '#default_value' => config_get('backdropauth4ssp.settings', 'backdropauth4ssp_authsource'),
    '#description' => t('The simpleSAMLphp authentication source.'),
  );
  // TODO This variable was probably removed in Backdrop without replacement.
  $form['backdropauth4ssp_setup']['backdropauth4ssp_returnto_list'] = array(
    '#type' => 'textarea',
    '#title' => t('Allowed list of URLs for ReturnTo Parameter'),
    '#default_value' => config_get('backdropauth4ssp.settings', 'backdropauth4ssp_returnto_list'),
    '#description' => t('Enter one URL per line. The \'*\'(wildcard) character is allowed. Example URLs are www.example.com/specific-path for a certain path and www.example.com* for all the URLs for www.example.com domain (like www.example.com; www.example.com/path1; www.example.com/path2/path3 etc.) and *example.com* for all subdomain paths (like a.example.com; a.example.com/path etc.)'),
  );

  return system_settings_form($form);
}
