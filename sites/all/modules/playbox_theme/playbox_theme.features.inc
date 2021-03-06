<?php
/**
 * @file
 * playbox_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function playbox_theme_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function playbox_theme_fontyourface_features_default_font() {
  return array(
    'Roboto Slab 700 (latin)' => array(
      'name' => 'Roboto Slab 700 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto Slab&subset=latin#700',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto Slab',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:15:"Roboto Slab:700";s:6:"subset";s:5:"latin";}',
    ),
    'Roboto Slab regular (latin)' => array(
      'name' => 'Roboto Slab regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Roboto Slab&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Roboto Slab',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:19:"Roboto Slab:regular";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 200 (latin)' => array(
      'name' => 'Titillium Web 200 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#200',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'normal',
      'css_weight' => 200,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:17:"Titillium Web:200";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 200italic (latin)' => array(
      'name' => 'Titillium Web 200italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#200italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'italic',
      'css_weight' => 200,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Titillium Web:200italic";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 300 (latin)' => array(
      'name' => 'Titillium Web 300 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#300',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:17:"Titillium Web:300";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 300italic (latin)' => array(
      'name' => 'Titillium Web 300italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#300italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'italic',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Titillium Web:300italic";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 600 (latin)' => array(
      'name' => 'Titillium Web 600 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#600',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'normal',
      'css_weight' => 600,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:17:"Titillium Web:600";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 600italic (latin)' => array(
      'name' => 'Titillium Web 600italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#600italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'italic',
      'css_weight' => 600,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Titillium Web:600italic";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 700 (latin)' => array(
      'name' => 'Titillium Web 700 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#700',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:17:"Titillium Web:700";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 700italic (latin)' => array(
      'name' => 'Titillium Web 700italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#700italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'italic',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:23:"Titillium Web:700italic";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web 900 (latin)' => array(
      'name' => 'Titillium Web 900 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#900',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'normal',
      'css_weight' => 900,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:17:"Titillium Web:900";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web italic (latin)' => array(
      'name' => 'Titillium Web italic (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#italic',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'italic',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:20:"Titillium Web:italic";s:6:"subset";s:5:"latin";}',
    ),
    'Titillium Web regular (latin)' => array(
      'name' => 'Titillium Web regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Titillium Web&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Titillium Web',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:21:"Titillium Web:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}
