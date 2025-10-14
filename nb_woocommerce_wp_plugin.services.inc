<?php

/**
 * Services endpoint definitions for WooCommerce WordPress plugin integration
 */

/**
 * Implements hook_services_resources().
 */
function nb_woocommerce_wp_plugin_services_resources() {

  return array(
    'woocommerce-voucher-generation' => array(
      'operations' => array(
        'create' => array(
          'help' => 'Generate voucher for WooCommerce order',
          'callback' => 'nb_woocommerce_wp_plugin_voucher_generation',
          'access callback' => 'nb_woocommerce_wp_plugin_access_check',
          'args' => array(
            array(
              'name' => 'access_token',
              'type' => 'string',
              'description' => 'Access token for authentication',
              'source' => array('data' => 'access_token'),
              'optional' => FALSE,
            ),
            array(
              'name' => 'order_data',
              'type' => 'array',
              'description' => 'Order data from WordPress',
              'source' => array('data' => 'order_data'),
              'optional' => FALSE,
            ),
          ),
        ),
      ),
    ),
  );
}