// C++11 Pimpl idiom: header file
#include <iostream>
using namespace std;






class Ergometer {
public:
	Ergometer(int);
private:
	int i;
};

Ergometer::Ergometer(int x) : i(x) {}

int main()
{
	myClass my_class(5);

	// dynamic
	myClass* my_class_ptr = new myClass(5);
	delete my_class_ptr;
	
	std::cout << "x";
	
	return 0;
}
