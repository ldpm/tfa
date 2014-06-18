<?php
/**
 * @file
 * leadership_programs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function leadership_programs_taxonomy_default_vocabularies() {
  return array(
    'program_type' => array(
      'name' => 'Program Type',
      'machine_name' => 'program_type',
      'description' => 'What kind of Program is this?',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
