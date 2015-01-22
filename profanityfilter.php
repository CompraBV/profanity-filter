<?php

/**
 * Class ProfanityFilter
 *
 * PHP Interface for the Profanity Filter tool
 *
 * How to use:
 *
 * supply a word as argument

 * Returns 0 if the word is not on the badwords list
 * Returns 1 if the word is on the badwords list
 * Returns 2 on missing argument
 */
class ProfanityFilter implements IProfanityFilter {

    static function isProfanity ($word)
    {

        exec ("assets/tools/profanity-filter/profanity-filter " . $word, $out, $return);
        $return != 0 ? false : true;

    }

}