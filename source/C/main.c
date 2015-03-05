#include "program.h"

int main (int argc, char *argv[]) {

	if (argc != 2) {

		puts ("Missing arguments");
		return 2;

	}

	if (filter (argv[1], argv[0]) == 1) {

		return 1;

	}

	return 0;

}
