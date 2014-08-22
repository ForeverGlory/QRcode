<?php

function qrcode_admin_settings($form, &$form_state) {
  $form['qrcode_device'] = array(
    '#type' => 'select',
    '#options' => array(
      0 => 'Google QRCode api',
      1 => 'PHPQRCode'
    ),
    '#default_value' => variable_get('qrcode_device', 0)
  );
//  if (!libraries_get_path('PHPQRCode')) {
  $form['qrcode_device_info'] = array(
    '#type' => 'container',
    '#title' => 'title',
    '#markup' => t('PHPQRCode library not found.'),
    '#states' => array(
      'visible' => array(
        ':input[name="qrcode_type"]' => array('value' => '1'),
      ),
    )
  );
//  }
  return system_settings_form($form);
}
