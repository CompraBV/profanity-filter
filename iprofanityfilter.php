<?php

/**
 * Interface IProfanityFilter
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
interface IProfanityFilter
{

    /**
     * @param $word
     * @return mixed
     *
     * Uses the exec() built-in function to run the profanity-filter file.
     * It returns true if the word is on the list and returns false if it isn't.
     */
    static function isProfanity ($word);

}