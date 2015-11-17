
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
     * Copy constructor for Machine
     */
    Machine(const Machine &obj);

    /**
     * Destructor for Machine
     */
    ~Machine();

    /**
     * Changes the state of the machine to in use
     * @return true if successful in changing state to "in use" else false
     */
    bool start();

    /**
     * Changes the state of the machine to in use
     * @return true if successful in changing state to "idle" else false
     */
    bool stop();

    /**
     * Compiles a report on the Machines use from the machine_log
     * @return a vector with the machines use one item at a time chronologically
     */
    vector<string> getReport();

    /**
     * Changes the id of the machine
     * @param new_id is a new id to set the machines id to
     * @return true if successful in changing id
     */
    bool setID(int);

private:
    int id;
    vector<string> machine_log;
    string status;
};

Machine::Machine(void) {
    id = 0;
    status = "idle";
    machine_log.push_back(status);
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
