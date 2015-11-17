#ifndef _MACHINE_H_
#define _MACHINE_H_


#include <vector>
#include <string>


class Machine {
public:
    /**
     * Default constructor for Machine
     * creates a Machine with id 0
     */
	Machine();

    /**
     * Constructor for loading data into Machine
     */
    Machine(int _id, std::vector<std::string> _machine_log, std::string _status);

	/**
     * Implicit copy constructor for Machine
     */
    Machine(const Machine &obj);

    /**
     * Copy constructor for Machine
     */
    Machine(const Machine &obj, int _id);

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
    std::vector<std::string> getReport();

    /**
     * Changes the id of the machine
     * @param new_id is a new id to set the machines id to
     * @return true if successful in changing id
     */
    bool setID(int);

	/**
     * Changes the state of the machine
     * @param new_state is a new state to set the machines id to
     * @return true if successful in changing state
     */
    bool setStatus(std::string new_state);

	/**
	 * Gets the id of the machine
	 * @return the id
	 */
	int getID();

private:
    int id;
    std::vector<std::string> machine_log;
    std::string status;
};

#endif
