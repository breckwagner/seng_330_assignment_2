// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include "Config.h"
#include <iostream>
#include "Machine.cxx"

using namespace std;

bool process_cmd(std::string cmd, Machine m) {
    if(cmd.compare("quit")==0) {return false;}
    else if (cmd.find("help") == 0) {
        std::cout << "Options include: quit, help, status";
    }
    else if(cmd.compare("status")==0) {
        for (string i : m.getReport() ) {
            cout << i;
        }
    }
    else {std::cout << "unknown command\n";}
    return true;
}

int main(int argc, char *argv[]) {
    Machine prototype;
    static const int maxchar = 5;
    std::string input;

    do {
        std::cout << "Type command: \n";
    } while (std::cin >> input && process_cmd(input, prototype));
}
