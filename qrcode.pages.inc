<?php

function qrcode_page() {
  $chl = $_GET['chl'];
  $chs = empty($_GET['chs']) ? '320x320' : $_GET['chs'];
  drupal_goto(qrcode_url($chl, $chs));
}