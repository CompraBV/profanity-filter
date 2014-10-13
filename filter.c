#include "program.h"

int filter (const char * word) {

	static const char * BADWORDS = "badwords.txt";

	char * line = NULL;
	ssize_t read;

	FILE *file = fopen (BADWORDS, "r");
	
	if (file != NULL) {

		char line[128];

		while (!feof (file)) {

			fgets (line, sizeof line, file);

			if (strncmp (word, line, strlen (line) - 2) == 0) {

				printf ("MATCH FOUND: %s\n", word);
				return TRUE; //bad word detected!
			
			}

		}

		return FALSE; //all is good

	} else {

		printf ("Couldn't find the file..");
		return 3;

	}

}
