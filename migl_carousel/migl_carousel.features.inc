<?php
/**
 * @file
 * migl_carousel.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function migl_carousel_eck_bundle_info() {
  $items = array(
    'migl_carousel_migl_carousel' => array(
      'machine_name' => 'migl_carousel_migl_carousel',
      'entity_type' => 'migl_carousel',
      'name' => 'migl_carousel',
      'label' => 'Carousel',
      'config' => array(),
    ),
    'migl_carousel_slide_migl_carousel_slide' => array(
      'machine_name' => 'migl_carousel_slide_migl_carousel_slide',
      'entity_type' => 'migl_carousel_slide',
      'name' => 'migl_carousel_slide',
      'label' => 'Carousel Slide',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function migl_carousel_eck_entity_type_info() {
  $items = array(
    'migl_carousel' => array(
      'name' => 'migl_carousel',
      'label' => 'Carousel',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
    'migl_carousel_slide' => array(
      'name' => 'migl_carousel_slide',
      'label' => 'Carousel Slide',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}
