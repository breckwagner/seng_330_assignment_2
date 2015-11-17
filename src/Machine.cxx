
#include <vector>
#include <string>
#include <sstream>

using namespace std;


class Machine {
public:
    /**
     * Default constructor for Machine
     * creates a Machine with id 0
     */
	Machine();

    /**
     * Changes the state of the machine to in use
     * @return true if successful in changing state to "in use" else false
     */
    bool start();

    vector<string> getReport();

private:
    int id;
    vector<string> machine_log;
    string status;
};

Machine::Machine() {
    id = 0;
    status = "idle";
    machine_log.push_back(status);
}

bool Machine::start() {
    if(status.compare("idle")==0) {
        status = "in use";
        machine_log.push_back(status);
    } else return false;
    return true;
}

vector<string> Machine::getReport() {
    return "Machine " + id + ": " + machine_log;
}
