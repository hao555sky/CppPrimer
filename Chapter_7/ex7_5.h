#ifndef CP5_ex7_05_h
#define CP5_ex7_05_h

#include <string>

using std::string;

struct Person
{
	string name;
	string address;

	string getName() const { return name; }
	string getAddress() const { return address; }
};

#endif