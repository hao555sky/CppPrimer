#include <string>
#include <istream>
#include <ostream>

using std::string;
using std::istream;
using std::ostream;

struct Person
{
	string name;
	string address;
	
	string getName() const { return name; }
	string getAddress() const { return address; }

};

istream& read(istream &is, Person &rhs)
{
	is >> rhs.name >> rhs.address;
	return is;
}

ostream& print(ostream& os, const Person &rhs)
{
	os << rhs.name << " " << rhs.address;
	return os;
}
