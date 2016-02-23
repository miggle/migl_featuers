<?php
/**
 * @file
 * migl_carousel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function migl_carousel_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck list migl_carousel migl_carousel entities'.
  $permissions['eck list migl_carousel migl_carousel entities'] = array(
    'name' => 'eck list migl_carousel migl_carousel entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list migl_carousel_slide migl_carousel_slide entities'.
  $permissions['eck list migl_carousel_slide migl_carousel_slide entities'] = array(
    'name' => 'eck list migl_carousel_slide migl_carousel_slide entities',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
