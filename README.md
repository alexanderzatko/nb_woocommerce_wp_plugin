# Na Bezky WooCommerce WP Plugin

Integration module for WordPress WooCommerce plugin with Nábežky voucher system.

## Description

This Drupal 7 module provides API endpoints for WordPress WooCommerce plugin to generate vouchers and handle user authentication for the Nábežky cross-country skiing trail grooming system.

## Features

- Voucher generation for WooCommerce orders
- User authentication and access token validation
- Support for both registered and anonymous users
- Seasonal pass and 3-day voucher generation
- Email notifications to customers
- Integration with existing Nábežky modules

## Dependencies

- Drupal Services module
- nb_grooming_map module
- nb_store module

## Installation

1. Place the module files in your Drupal sites/all/modules directory
2. Enable the module in Drupal admin
3. Configure access tokens in admin/config/services/nb_woocommerce_wp_plugin

## API Endpoints

- `POST /services/woocommerce-voucher-generation` - Generate vouchers for WooCommerce orders

## Configuration

The module provides an admin interface at `/admin/config/services/nb_woocommerce_wp_plugin` where you can:

- Configure allowed access tokens for WordPress plugin authentication
- Set callback timeout values
- Monitor voucher generation logs

## Usage

The WordPress WooCommerce plugin can send POST requests to the voucher generation endpoint with:

- `access_token`: Valid authentication token
- `order_data`: Object containing:
  - `email`: Customer email address
  - `amount`: Order amount
  - `order_id`: WooCommerce order ID
  - `region_id`: Optional region ID (defaults to 1)

## Response Format

The API returns JSON responses with:

- `status`: "success" or "error"
- `message`: Human-readable message
- `voucher_data`: Object containing voucher information (on success)
- `error_code`: HTTP error code (on error)

## Version

7.x-1.0

## License

This module is part of the Nábežky project for cross-country skiing trail grooming in Slovakia.
