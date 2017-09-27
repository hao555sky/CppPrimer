#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s;
	while(getline(cin, s))
	{
	    for(auto c : s)
			if (!ispunct(c))
				cout << c;
		cout << endl;	
	}
	
	return 0;
}