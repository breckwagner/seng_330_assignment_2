// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include "Config.h"
#include <iostream>
#include "Machine.cxx"

#include "Ergometer.cxx"
#include "Bike.cxx"

using namespace std;

bool process_cmd(std::string cmd, vector<Machine> _machines_in_complex) {
    if(cmd.compare("quit")==0) {return false;}

////////////////////////////////////////////////////////////////////////////////

    else if (cmd.find("help") == 0) {
        std::cout << "Options include: quit, help, status";
    }

////////////////////////////////////////////////////////////////////////////////

    else if(cmd.compare("status")==0) {
        for (Machine m : _machines_in_complex) {
            cout << "Machine " << to_string(m.getID()) << " log:";
            for(string s : m.getReport()){
                cout << s << ", ";
            }
            cout << "\n";
        }
    }

////////////////////////////////////////////////////////////////////////////////

    else if(cmd.compare("save")==0) {

    }

////////////////////////////////////////////////////////////////////////////////

    else if(cmd.find("add")==0) {
        if(cmd.find("Bike")==0){

        } else if(cmd.find("Ergometer")==0){

        }
    }

////////////////////////////////////////////////////////////////////////////////

    else if(cmd.find("remove")==0) {

    }

////////////////////////////////////////////////////////////////////////////////

    else if(cmd.find("set")==0) {

    }

////////////////////////////////////////////////////////////////////////////////

    else {std::cout << "unknown command\n";}
    return true;
}

int main(int argc, char *argv[]) {
    Machine prototype;

    int num_ergs = 5;
    Ergometer proto_erg;

    int num_bikes = 2;
    Bike proto_bike;

    vector<Machine> machines_in_complex;

    while(num_ergs>0 || num_bikes>0){
        if(num_ergs>0) {
            machines_in_complex.push_back(proto_erg);
            num_ergs--;
        } else if (num_bikes>0) {
            machines_in_complex.push_back(proto_bike);
            num_bikes--;
        }
        machines_in_complex.back().setID(num_ergs + num_bikes + 1);
        cout << (num_ergs + num_bikes + 1) << "\n";
    }
    for(Machine i : machines_in_complex) {
        cout << i.getID();
    }
    string input;
    do {
        std::cout << "Type command: \n";
    } while (std::cin >> input && process_cmd(input, machines_in_complex));
}
