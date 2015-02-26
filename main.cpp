/*
 * How to use:
 *
 * use in command-line and supply a single argument with a word.
 * The software will return 1 if the word is profanity
 * it will return 0 if it isn't profanity
 */

#include "program.h"

int main (int argc, char * argv[])
{

	if (argc < 0)
		std::cout << "Missing argument :(" << std::endl;

	// Extract the first argument
	std::string input = argv[1];

	ProfanityFilter *pf = new ProfanityFilter ();

	return pf->isProfanity (input)
		? 1
		: 0;

}
