<?php

/**
 * Class ProfanityFilter
 *
 * PHP Interface for the Profanity Filter tool
 *
 * How to use:
 *
 * supply a word as argument

 * Returns false if the word is not on the badwords list
 * Returns true if the word is on the badwords list
 */
class ProfanityFilter implements IProfanityFilter {

    static function isProfanity ($word)
    {

        exec ("assets/tools/profanity-filter/profanity-filter " . $word, $out, $return);
        return $return == 1 
        	? true 
        	: false;

    }

}
