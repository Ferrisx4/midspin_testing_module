<?php
/**
 * Implements hook_page_build()
 */
function midspin_file_manager_page_build()
{
    $contents['Summary'] = array(
        '#markup'   =>  t('This is some text'),
    );

    // Don't forget to return() the contents!
    return $contents;
}