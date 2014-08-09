<?php

function custom_import_get_fields() {
  $fields['nodes'] = "\$data = array(
  'bundles' => array(
    'article' => (object) array(
      'type' => 'article',
      'name' => 'Articol, ştire',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'article',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'blog' => (object) array(
      'type' => 'blog',
      'name' => 'Intrare blog',
      'base' => 'blog',
      'module' => 'blog',
      'description' => 'Use for multi-user blogs. Every user gets a personal blog.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '0',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => 'blog',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'page' => (object) array(
      'type' => 'page',
      'name' => 'Pagina',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'page',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'pagina_sugestie' => (object) array(
      'type' => 'pagina_sugestie',
      'name' => 'Sugestie',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Dacă ai de făcut o sugestie alege această opţiune.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Titlu',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'pagina_sugestie',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'poll' => (object) array(
      'type' => 'poll',
      'name' => 'Sondaj',
      'base' => 'poll',
      'module' => 'poll',
      'description' => 'A <em>poll</em> is a question with a set of possible responses. A <em>poll</em>, once created, automatically provides a simple running count of the number of votes received for each response.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Question',
      'custom' => '0',
      'modified' => '1',
      'locked' => '1',
      'disabled' => FALSE,
      'orig_type' => 'poll',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'semnatura' => (object) array(
      'type' => 'semnatura',
      'name' => 'Unterschrift/Signature/Semnătură',
      'base' => 'node_content',
      'module' => 'node',
      'description' => '',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Titel / Title / Titlu',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'semnatura',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'simplenews' => (object) array(
      'type' => 'simplenews',
      'name' => 'Newsletter issue',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'A newsletter issue to be sent to subscribed email addresses.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'simplenews',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'webform' => (object) array(
      'type' => 'webform',
      'name' => 'Webform',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'webform',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
    'wiki' => (object) array(
      'type' => 'wiki',
      'name' => 'Pagina wiki',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Alege această opţiune dacă vrei să introduci informaţii în secţiunea \"Util\".',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Titlu',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'wiki',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
  ),
  'fields' => array(
    'body' => array(
      'entity_types' => array(
        0 => 'node',
      ),
      'translatable' => '0',
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'body',
      'type' => 'text_with_summary',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'summary' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'page',
          1 => 'article',
          2 => 'webform',
          3 => 'blog',
          4 => 'simplenews',
          5 => 'pagina_sugestie',
          6 => 'semnatura',
          7 => 'wiki',
        ),
      ),
    ),
    'field_arhivat' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          'Da' => 'Da',
          'Nu' => 'Nu',
        ),
        'allowed_values_function' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_arhivat' => array(
                'value' => 'field_arhivat_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_arhivat' => array(
                'value' => 'field_arhivat_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'field_name' => 'field_arhivat',
      'type' => 'list_text',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'webform',
        ),
      ),
    ),
    'field_art_gen_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'articole_de_utilitate_generala',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_art_gen_category' => array(
                'tid' => 'field_art_gen_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_art_gen_category' => array(
                'tid' => 'field_art_gen_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_art_gen_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
          2 => 'webform',
          3 => 'wiki',
        ),
      ),
    ),
    'field_biserici_rom_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'biserici_romanesti',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_biserici_rom_category' => array(
                'tid' => 'field_biserici_rom_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_biserici_rom_category' => array(
                'tid' => 'field_biserici_rom_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_biserici_rom_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
        ),
      ),
    ),
    'field_blog_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'blog',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_blog_category' => array(
                'tid' => 'field_blog_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_blog_category' => array(
                'tid' => 'field_blog_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_blog_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'blog',
        ),
      ),
    ),
    'field_cultural_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'cultural',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_cultural_category' => array(
                'tid' => 'field_cultural_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_cultural_category' => array(
                'tid' => 'field_cultural_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_cultural_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
        ),
      ),
    ),
    'field_despre_site_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'despre_acest_site',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_despre_site_category' => array(
                'tid' => 'field_despre_site_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_despre_site_category' => array(
                'tid' => 'field_despre_site_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_despre_site_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
          2 => 'poll',
        ),
      ),
    ),
    'field_editare_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'editare',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_editare_category' => array(
                'tid' => 'field_editare_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_editare_category' => array(
                'tid' => 'field_editare_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_editare_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
        ),
      ),
    ),
    'field_elvetia_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'din_elvetia',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_elvetia_category' => array(
                'tid' => 'field_elvetia_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_elvetia_category' => array(
                'tid' => 'field_elvetia_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_elvetia_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
          2 => 'webform',
        ),
      ),
    ),
    'field_email' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_email' => array(
                'email' => 'field_email_email',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_email' => array(
                'email' => 'field_email_email',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'field_name' => 'field_email',
      'type' => 'email',
      'module' => 'email',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'email' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'semnatura',
        ),
      ),
    ),
    'field_even_rom_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'evenimente_romanesti',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_even_rom_category' => array(
                'tid' => 'field_even_rom_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_even_rom_category' => array(
                'tid' => 'field_even_rom_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_even_rom_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'webform',
        ),
      ),
    ),
    'field_imagine' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'uri_scheme' => 'public',
        'default_image' => 0,
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_imagine' => array(
                'fid' => 'field_imagine_fid',
                'alt' => 'field_imagine_alt',
                'title' => 'field_imagine_title',
                'width' => 'field_imagine_width',
                'height' => 'field_imagine_height',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_imagine' => array(
                'fid' => 'field_imagine_fid',
                'alt' => 'field_imagine_alt',
                'title' => 'field_imagine_title',
                'width' => 'field_imagine_width',
                'height' => 'field_imagine_height',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'fid' => array(
          'table' => 'file_managed',
          'columns' => array(
            'fid' => 'fid',
          ),
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'field_name' => 'field_imagine',
      'type' => 'image',
      'module' => 'image',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'fid' => array(
          'description' => 'The {file_managed}.fid being referenced in this field.',
          'type' => 'int',
          'not null' => FALSE,
          'unsigned' => TRUE,
        ),
        'alt' => array(
          'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
          'type' => 'varchar',
          'length' => 512,
          'not null' => FALSE,
        ),
        'title' => array(
          'description' => 'Image title text, for the image\'s \'title\' attribute.',
          'type' => 'varchar',
          'length' => 1024,
          'not null' => FALSE,
        ),
        'width' => array(
          'description' => 'The width of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
        'height' => array(
          'description' => 'The height of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'blog',
          2 => 'page',
          3 => 'webform',
        ),
      ),
    ),
    'field_link' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          '<a href=\"http://www.casa-romanilor.ch/offener-brief-fuer-das-referendum-im-8-februar-2009\">Deutsch</a>' => '<a href=\"http://www.casa-romanilor.ch/offener-brief-fuer-das-referendum-im-8-februar-2009\">Deutsch</a>',
          '<a href=\"http://www.casa-romanilor.ch/lettre-ouverte-pour-le-referendum-8-fevrier-2009\">Francais</a>' => '<a href=\"http://www.casa-romanilor.ch/lettre-ouverte-pour-le-referendum-8-fevrier-2009\">Francais</a>',
          '<a href=\"http://www.casa-romanilor.ch/scrisoare-deschisa-pentru-referendumul-din-8-februarie-2009\">Română</a>' => '<a href=\"http://www.casa-romanilor.ch/scrisoare-deschisa-pentru-referendumul-din-8-februarie-2009\">Română</a>',
        ),
        'allowed_values_function' => '',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_link' => array(
                'value' => 'field_link_value',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_link' => array(
                'value' => 'field_link_value',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'field_name' => 'field_link',
      'type' => 'list_text',
      'module' => 'list',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'semnatura',
        ),
      ),
    ),
    'field_locality' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '255',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_locality' => array(
                'value' => 'field_locality_value',
                'format' => 'field_locality_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_locality' => array(
                'value' => 'field_locality_value',
                'format' => 'field_locality_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_locality',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '255',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'semnatura',
        ),
        'user' => array(
          0 => 'user',
        ),
      ),
    ),
    'field_mat_arh_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'materiale_arhivate',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_mat_arh_category' => array(
                'tid' => 'field_mat_arh_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_mat_arh_category' => array(
                'tid' => 'field_mat_arh_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_mat_arh_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
          2 => 'simplenews',
          3 => 'webform',
          4 => 'wiki',
        ),
      ),
    ),
    'field_nume' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'max_length' => '255',
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_nume' => array(
                'value' => 'field_nume_value',
                'format' => 'field_nume_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_nume' => array(
                'value' => 'field_nume_value',
                'format' => 'field_nume_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'field_nume',
      'type' => 'text',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => '255',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'semnatura',
        ),
      ),
    ),
    'field_org_rom_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'organizatii_romanesti_in_elvetia',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_org_rom_category' => array(
                'tid' => 'field_org_rom_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_org_rom_category' => array(
                'tid' => 'field_org_rom_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_org_rom_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
          1 => 'page',
          2 => 'webform',
        ),
      ),
    ),
    'field_simplenews_term' => array(
      'translatable' => '1',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => 0,
            'vocabulary' => 'newsletter',
          ),
        ),
      ),
      'entity_types' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_simplenews_term' => array(
                'tid' => 'field_simplenews_term_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_simplenews_term' => array(
                'tid' => 'field_simplenews_term_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_simplenews_term',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'simplenews',
        ),
      ),
    ),
    'field_sugestii_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'sugestii',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_sugestii_category' => array(
                'tid' => 'field_sugestii_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_sugestii_category' => array(
                'tid' => 'field_sugestii_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_sugestii_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'pagina_sugestie',
        ),
      ),
    ),
  ),
  'instances' => array(
    'body' => array(
      0 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '11',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '2',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'blog',
        'deleted' => '0',
      ),
      2 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '10',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'weight' => '1',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
      3 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '2',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 0,
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'pagina_sugestie',
        'deleted' => '0',
      ),
      4 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '4',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 0,
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'semnatura',
        'deleted' => '0',
      ),
      5 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '3',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'simplenews',
        'deleted' => '0',
      ),
      6 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '6',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
      7 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '3',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'weight' => '0',
            'settings' => array(),
            'module' => 'text',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'wiki',
        'deleted' => '0',
      ),
    ),
    'field_arhivat' => array(
      0 => array(
        'label' => 'Arhivat',
        'widget' => array(
          'weight' => '12',
          'type' => 'options_buttons',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '10',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 1,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 'Nu',
          ),
        ),
        'field_name' => 'field_arhivat',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Arhivat',
        'widget' => array(
          'weight' => '7',
          'type' => 'options_buttons',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '7',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 1,
        'description' => '',
        'default_value' => array(
          0 => array(
            'value' => 'Nu',
          ),
        ),
        'field_name' => 'field_arhivat',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
    ),
    'field_art_gen_category' => array(
      0 => array(
        'label' => 'Articole generale',
        'widget' => array(
          'weight' => '10',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '1',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_art_gen_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Articole generale',
        'widget' => array(
          'weight' => '8',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_art_gen_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
      2 => array(
        'label' => 'Articole generale',
        'widget' => array(
          'weight' => '5',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_art_gen_category',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
      3 => array(
        'label' => 'Articole generale',
        'widget' => array(
          'weight' => '2',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_art_gen_category',
        'entity_type' => 'node',
        'bundle' => 'wiki',
        'deleted' => '0',
      ),
    ),
    'field_biserici_rom_category' => array(
      0 => array(
        'label' => 'Biserici romanesti',
        'widget' => array(
          'weight' => '5',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '6',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_biserici_rom_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Biserici romanesti',
        'widget' => array(
          'weight' => '4',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '3',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_biserici_rom_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
    ),
    'field_blog_category' => array(
      0 => array(
        'label' => 'Blog Category',
        'widget' => array(
          'weight' => '1',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 1,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_blog_category',
        'entity_type' => 'node',
        'bundle' => 'blog',
        'deleted' => '0',
      ),
    ),
    'field_cultural_category' => array(
      0 => array(
        'label' => 'Cultural',
        'widget' => array(
          'weight' => '4',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '7',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_cultural_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Cultural',
        'widget' => array(
          'weight' => '3',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '4',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_cultural_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
    ),
    'field_despre_site_category' => array(
      0 => array(
        'label' => 'Despre acest site',
        'widget' => array(
          'weight' => '3',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '8',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_despre_site_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Despre acest site',
        'widget' => array(
          'weight' => '2',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '5',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_despre_site_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
      2 => array(
        'label' => 'Despre acest site',
        'widget' => array(
          'weight' => '0',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_despre_site_category',
        'entity_type' => 'node',
        'bundle' => 'poll',
        'deleted' => '0',
      ),
    ),
    'field_editare_category' => array(
      0 => array(
        'label' => 'Editare',
        'widget' => array(
          'weight' => '6',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '5',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_editare_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Editare',
        'widget' => array(
          'weight' => '5',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '7',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_editare_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
    ),
    'field_elvetia_category' => array(
      0 => array(
        'label' => 'Din Elvetia',
        'widget' => array(
          'weight' => '2',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '9',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_elvetia_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Din Elvetia',
        'widget' => array(
          'weight' => '1',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '6',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_elvetia_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
      2 => array(
        'label' => 'Din Elvetia',
        'widget' => array(
          'weight' => '3',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '3',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_elvetia_category',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
    ),
    'field_email' => array(
      0 => array(
        'label' => 'E-mail (nicht publiziert, pas publiée, nepublicat)',
        'widget' => array(
          'weight' => '3',
          'type' => 'email_textfield',
          'module' => 'email',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'email_default',
            'settings' => array(),
            'module' => 'email',
            'weight' => 2,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 1,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_email',
        'entity_type' => 'node',
        'bundle' => 'semnatura',
        'deleted' => '0',
      ),
    ),
    'field_even_rom_category' => array(
      0 => array(
        'label' => 'Evenimente romanesti',
        'widget' => array(
          'weight' => '7',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '4',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_even_rom_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Evenimente romanesti',
        'widget' => array(
          'weight' => '2',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '4',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_even_rom_category',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
    ),
    'field_imagine' => array(
      0 => array(
        'label' => 'Imagine',
        'widget' => array(
          'weight' => '14',
          'type' => 'image_image',
          'module' => 'image',
          'active' => 1,
          'settings' => array(
            'progress_indicator' => 'throbber',
            'preview_image_style' => 'thumbnail',
          ),
        ),
        'settings' => array(
          'file_directory' => '',
          'file_extensions' => 'png gif jpg jpeg',
          'max_filesize' => '',
          'max_resolution' => '',
          'min_resolution' => '',
          'alt_field' => 0,
          'title_field' => 0,
          'user_register_form' => FALSE,
          'default_image' => 0,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '11',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_imagine',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Imagine',
        'widget' => array(
          'weight' => '3',
          'type' => 'image_image',
          'module' => 'image',
          'active' => 1,
          'settings' => array(
            'progress_indicator' => 'throbber',
            'preview_image_style' => 'thumbnail',
          ),
        ),
        'settings' => array(
          'file_directory' => '',
          'file_extensions' => 'png gif jpg jpeg',
          'max_filesize' => '',
          'max_resolution' => '',
          'min_resolution' => '',
          'alt_field' => 0,
          'title_field' => 0,
          'user_register_form' => FALSE,
          'default_image' => 0,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '1',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_imagine',
        'entity_type' => 'node',
        'bundle' => 'blog',
        'deleted' => '0',
      ),
      2 => array(
        'label' => 'Imagine',
        'widget' => array(
          'weight' => '9',
          'type' => 'image_image',
          'module' => 'image',
          'active' => 1,
          'settings' => array(
            'progress_indicator' => 'throbber',
            'preview_image_style' => 'thumbnail',
          ),
        ),
        'settings' => array(
          'file_directory' => '',
          'file_extensions' => 'png gif jpg jpeg',
          'max_filesize' => '',
          'max_resolution' => '',
          'min_resolution' => '',
          'alt_field' => 0,
          'title_field' => 0,
          'user_register_form' => FALSE,
          'default_image' => 0,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'hidden',
            'weight' => '1',
            'settings' => array(),
          ),
          'teaser' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_imagine',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
      3 => array(
        'label' => 'Imagine',
        'widget' => array(
          'weight' => '8',
          'type' => 'image_image',
          'module' => 'image',
          'active' => 1,
          'settings' => array(
            'progress_indicator' => 'throbber',
            'preview_image_style' => 'thumbnail',
          ),
        ),
        'settings' => array(
          'file_directory' => '',
          'file_extensions' => 'png gif jpg jpeg',
          'max_filesize' => '',
          'max_resolution' => '',
          'min_resolution' => '',
          'alt_field' => 0,
          'title_field' => 0,
          'user_register_form' => FALSE,
          'default_image' => 0,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '8',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'field_name' => 'field_imagine',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
    ),
    'field_link' => array(
      0 => array(
        'label' => 'Sprachenversion / Versions de langue / Versiuni de limbă',
        'widget' => array(
          'weight' => '5',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'list_default',
            'settings' => array(),
            'module' => 'list',
            'weight' => 4,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_link',
        'entity_type' => 'node',
        'bundle' => 'semnatura',
        'deleted' => '0',
      ),
    ),
    'field_locality' => array(
      0 => array(
        'label' => 'Ort / Lieu / Localitate',
        'widget' => array(
          'weight' => '2',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 3,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 1,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_locality',
        'entity_type' => 'node',
        'bundle' => 'semnatura',
        'deleted' => '0',
      ),
    ),
    'field_mat_arh_category' => array(
      0 => array(
        'label' => 'Materiale arhivate',
        'widget' => array(
          'weight' => '9',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_mat_arh_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Materiale arhivate',
        'widget' => array(
          'weight' => '6',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '8',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_mat_arh_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
      2 => array(
        'label' => 'Materiale arhivate',
        'widget' => array(
          'weight' => '2',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '2',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_mat_arh_category',
        'entity_type' => 'node',
        'bundle' => 'simplenews',
        'deleted' => '0',
      ),
      3 => array(
        'label' => 'Materiale arhivate',
        'widget' => array(
          'weight' => '1',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '5',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_mat_arh_category',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
      4 => array(
        'label' => 'Materiale arhivate',
        'widget' => array(
          'weight' => '1',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '1',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_mat_arh_category',
        'entity_type' => 'node',
        'bundle' => 'wiki',
        'deleted' => '0',
      ),
    ),
    'field_nume' => array(
      0 => array(
        'label' => 'Vollständiger Name / Nom complet / Nume complet',
        'widget' => array(
          'weight' => '1',
          'type' => 'text_textfield',
          'module' => 'text',
          'active' => 1,
          'settings' => array(
            'size' => '60',
          ),
        ),
        'settings' => array(
          'text_processing' => '0',
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 1,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 1,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_nume',
        'entity_type' => 'node',
        'bundle' => 'semnatura',
        'deleted' => '0',
      ),
    ),
    'field_org_rom_category' => array(
      0 => array(
        'label' => 'Organizatii romanesti din Elvetia',
        'widget' => array(
          'weight' => '8',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '3',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_org_rom_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
      1 => array(
        'label' => 'Organizatii romanesti din Elvetia',
        'widget' => array(
          'weight' => '7',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '9',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_org_rom_category',
        'entity_type' => 'node',
        'bundle' => 'page',
        'deleted' => '0',
      ),
      2 => array(
        'label' => 'Organizatii romanesti din Elvetia',
        'widget' => array(
          'weight' => '4',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'hidden',
            'weight' => '6',
            'settings' => array(),
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_org_rom_category',
        'entity_type' => 'node',
        'bundle' => 'webform',
        'deleted' => '0',
      ),
    ),
    'field_simplenews_term' => array(
      0 => array(
        'label' => 'Newsletter category',
        'required' => TRUE,
        'widget' => array(
          'type' => 'options_select',
          'settings' => array(),
          'weight' => '1',
          'module' => 'options',
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'hidden',
            'weight' => '1',
            'settings' => array(),
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'hidden',
            'settings' => array(),
            'weight' => 1,
          ),
          'email_plain' => array(
            'label' => 'hidden',
            'type' => 'hidden',
            'settings' => array(),
            'weight' => 0,
          ),
          'email_html' => array(
            'label' => 'hidden',
            'type' => 'hidden',
            'settings' => array(),
            'weight' => 0,
          ),
          'email_textalt' => array(
            'label' => 'hidden',
            'type' => 'hidden',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_simplenews_term',
        'entity_type' => 'node',
        'bundle' => 'simplenews',
        'deleted' => '0',
      ),
    ),
    'field_sugestii_category' => array(
      0 => array(
        'label' => 'Sugestii',
        'widget' => array(
          'weight' => '1',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'settings' => array(),
            'module' => 'taxonomy',
            'weight' => 1,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 1,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_sugestii_category',
        'entity_type' => 'node',
        'bundle' => 'pagina_sugestie',
        'deleted' => '0',
      ),
    ),
  ),
);";

return $fields;
}