// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include "Config.h"
#include <iostream>
#include "Machine.cxx"

using namespace std;

bool process_cmd(std::string cmd) {
    if(cmd.compare("quit")==0) {return false;}
    else if (cmd.find("help") == 0) {
        std::cout << "Options include: quit, help, status";
    }
    else if(cmd.compare("status")==0) {
        
        Machine x;
        for (string i : x.machine_log ) {
            cout << i;
        }
        /*
        for(auto it = machine_log.begin();
                it != machine_log.end(); ++it){
            cout << ", " << *it;
        }*/
        //std::cout << x.getReport();
    }
    else {std::cout << "unknown command\n";}
    return true;
}

int main(int argc, char *argv[]) {
    static const int maxchar = 5;
    std::string input;

    do {
        std::cout << "Type command: \n";
    } while (std::cin >> input && process_cmd(input));
}

/*
int main (int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(stdout,"%s Version %d.%d\n",
						argv[0],
						Tutorial_VERSION_MAJOR,
						Tutorial_VERSION_MINOR);
		fprintf(stdout,"Usage: %s number\n",argv[0]);
		return 1;
	}

	static const int maxchar = 5;
    std::string nationname;

    do {
        std::cout << "What is the name of your nation?\n";
    } while (std::cin >> nationname && nationname.size() > maxchar && show_error());

	double inputValue = atof(argv[1]);
	double outputValue = sqrt(inputValue);
	fprintf(stdout,"The square root of %g is %g\n",
					inputValue, outputValue);
	return 0;
}*/
