#include "program.h"

int main (int argc, char *argv[]) {

	if (argc != 2) {

		puts ("Missing arguments");
		return 2;

	}

	if (filter (argv[1]) == 1) {
		
		puts ("BADWORD");		
		return 1;

	}

	puts ("NO BADWORD");
	return 0;

}
