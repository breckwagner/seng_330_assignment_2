// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Config.h"

int main (int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(stdout,"%s Version %d.%d\n",
						argv[0],
						Tutorial_VERSION_MAJOR,
						Tutorial_VERSION_MINOR);
		fprintf(stdout,"Usage: %s number\n",argv[0]);
		return 1;
	}

	while (true) {
	    cin >> s;
	    n = atoi(s.c_str());

	    if (n <= 4 || n >= 10) {
	    // handles your exception and goes back to the beggining of the loop
	    continue;
	    }
	    else {
	    // the number was correct, so make your magic happen and then...
	    break;
	    }
	}

	double inputValue = atof(argv[1]);
	double outputValue = sqrt(inputValue);
	fprintf(stdout,"The square root of %g is %g\n",
					inputValue, outputValue);
	return 0;
}
