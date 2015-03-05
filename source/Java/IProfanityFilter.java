package nl.compra.ProfanityFilter;

/**
 * @author Bob Desaunois <bobdesaunois@gmail.com>
 *
 */
public interface IProfanityFilter {

	/**
	 * Expects a word as an argument and checks whether it's profanity.
	 * If the word is in fact profanity it returns the boolean value true,
	 * if not it returns the boolean value false.
	 * 
	 * @return boolean 
	 */
	boolean IsProfanity (String word);
	
}
