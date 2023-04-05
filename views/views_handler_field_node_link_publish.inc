<?php
/**
 * @file
 * Contains views_handler_field_node_link_publish
 */

/**
 * Adds a publish node link
 */
class views_handler_field_node_link_publish extends views_handler_field_node_link {

  /**
   * Renders the link.
   */
  public function render_link($node, $values) {
    // Ensure user has access to unpublish this node.
    if (!user_access('publish nodes')) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "url_publish/$node->nid";
    $this->options['alter']['query'] = backdrop_get_destination();

    $text = !empty($this->options['text']) ? $this->options['text'] : t('publish');
    return $text;
  }
}
