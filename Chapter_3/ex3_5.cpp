#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void a()
{
	string word, currWord;
	if(cin >> word)
	{
		while(cin >> currWord)
			word += currWord;
		cout << word <<endl;
	}
}

void b()
{
	string word, currWord;
	while (cin >> currWord)
		word = word + currWord + " ";
	cout << word <<endl;
}

int main()
{
	b();
	return 0;
}