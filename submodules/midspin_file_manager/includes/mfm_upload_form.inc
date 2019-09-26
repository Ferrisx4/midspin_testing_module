<?php

function mfm_upload_form($form, &$form_state)
{
    $form['Query']['QueryFile'] = array(
        '#type'         => 'managed_file',
        //'#title'        => t('Your file'),
        '#upload_validators' => array(
            'file_validate_extensions' => array('txt dmnd png jpggz FA FAA FNN FASTA fa faa fnn fasta'),
            'test_the_file',
        ),
        '#progress_indicator'   => array('bar'),
        '#upload_location' => 'public://',
    );

    return $form();
}

function mfm_upload_form_submit($form, &$form_state)
{
    $form['submit_button'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
    '#suffix' => t('<p>Upon Submission, your search will enter the '
            . 'queue with either BLAST or Diamond as the engine. You will'
            . ' be given a link to view the progress and results of the '
            . 'job.</p>')
    );

    drupal_set_message("Good job");
}