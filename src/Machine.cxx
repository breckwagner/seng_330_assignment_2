

#include <sstream>
#include "Machine.h"

using namespace std;

Machine::Machine(void) {
    id = 0;
    status = "idle";
    machine_log.push_back(status);
}

Machine::Machine(int _id, vector<string> _machine_log, string _status) {
    id = _id;
    machine_log = _machine_log;
    status = _status;
    if(machine_log.back().compare(status)!=0){
        machine_log.push_back(status);
    }
}

Machine::Machine(const Machine &obj) {
    id = 0;
    status = "idle";
    machine_log.push_back(status);
}

Machine::~Machine(void) {
}

bool Machine::start() {
    if(status.compare("idle")==0) {
        status = "in use";
        machine_log.push_back(status);
    } else return false;
    return true;
}

bool Machine::stop() {
    if(status.compare("in use")==0) {
        status = "idle";
        machine_log.push_back(status);
    } else return false;
    return true;
}

vector<string> Machine::getReport() {
    return machine_log;
}

bool Machine::setID(int new_id) {
    if(new_id>0) id = new_id;
    else return false;
    return true;
}

int Machine::getID() {
    return id;
}
