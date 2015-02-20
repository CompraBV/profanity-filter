/*
 * ProfanityFilter.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: Bob Desaunois
 */

#include "program.h"
#include "ProfanityFilter.h"

ProfanityFilter::ProfanityFilter(std::string word)
{

	if (this->isProfanity (word))
		std::cout << "Profanity!" << std::endl;
	else
		std::cout << "We're good!" << std::endl;


}

int ProfanityFilter::isProfanity (std::string word)
{

	std::ifstream file;

	file.open (BADWORDS_TXT);
	if (file.is_open ())
	{

		std::string line;
		while (getline (file, line))
		{



			if (word.compare (line) == 0)
			{

				return TRUE;

			} else std::cout << word << " doesn't match " << line << std::endl;

		}

	} else std::cout << "Could not open/find file.";

	return FALSE;

}
