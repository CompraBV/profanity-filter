/*
 * ProfanityFilter.cpp
 *
 *  Created on: Feb 19, 2015
 *      Author: Bob Desaunois
 */

#include "program.h"
#include "ProfanityFilter.h"

int ProfanityFilter::isProfanity (std::string word)
{

	std::ifstream file;

	file.open (BADWORDS_TXT);
	if (file.is_open ())
	{

		std::string line;

		while (std::getline (file, line))
		{

			// Make sure it's a basic string like we know it
			std::string rLine = line.c_str ();

			// Remove the "/r" at the end of the string since we're dealing with a file
			rLine.erase (rLine.size () - 1);

			if ( ! word.compare (rLine))
			{

				std::cout << "Gotcha!" << std::endl;
				return TRUE;

			} else std::cout << word << " doesn't match " << line << std::endl;

		}

	} else std::cout << "Could not open/find file.";

	return FALSE;

}
