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

    static $rawOutput;

    static function isProfanity ($word)
    {

    	$lines = file ('assets/tools/profanity-filter/badwords.txt');
    	
    	foreach ($lines as $line)
    		if (trim(preg_replace('/\s\s+/', ' ', $line)) == $word)
    			return true;
    		
		return false;
		
    }

}
