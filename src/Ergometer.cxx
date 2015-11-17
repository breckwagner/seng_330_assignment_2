// C++11 Pimpl idiom: header file
#include <iostream>
#include "Machine.cxx"
using namespace std;


s


/** \class Ergometer
 *
 * The Ergometer class represents an abstraction of an Ergometer object in a
 * gym. It represents the functionality nessasary to report the state of the
 * machine including logs of use but not live data.
 */
class Ergometer : public Machine {
public:
	Ergometer(int);
private:
	int i;
};

Ergometer::Ergometer(int id) : i(x) {}
