/*
 * ProfanityFilter.h
 *
 *  Created on: Feb 19, 2015
 *      Author: Bob Desaunois
 */

#ifndef PROFANITYFILTER_H_
#define PROFANITYFILTER_H_

class ProfanityFilter {
public:
	ProfanityFilter (std::string word);
	int isProfanity (std::string word);
};

#endif /* PROFANITYFILTER_H_ */
