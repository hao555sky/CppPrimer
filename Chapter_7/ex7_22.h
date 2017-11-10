#ifndef CP5_EX7_22_H
#define CP5_EX7_22_H

#include <string>
#include <istream>
#include <ostream>

using std::string;
using std::istream;
using std::ostream;

class Person
{
friend istream& read(istream&, Person&);

public:
	Person() = default;
	Person(string nname, string naddress): name(nname), address(naddress) {}
	Person(istream& is) { read(is, *this); }

	string getName() const { return name; }
	string getAddress() const { return address; }

private:
	string name;
	string address;
};

istream& read(istream& is, Person& person)
{
	is >> person.name >> person.address;
	return is;
}

ostream& print(ostream& os, const Person& person)
{
	os << person.getName() << " " << person.getAddress();
	return os;
}

#endif