#ifndef CP5_EX7_15_H
#define CP5_EX7_15_H

#include <string>
#include <istream>
#include <ostream>

using std::string;
using std::istream;
using std::ostream;

struct Person;
istream& read(istream& is, Person &p);

struct Person
{
	string name;
	string address;

	Person() = default;
	Person(const string& n, const string& a): name(n), address(a) {}
	Person(istream& is){ read(is, *this); }

	string getName() const { return name; }
	string getAddress() const { return address; }
};

istream& read(istream& is, Person &p)
{
	is >> p.name >> p.address;
	return is;
}

ostream& print(ostream& os, const Person &p)
{
	os << p.name << " " << p.address;
	return os;
}

#endif