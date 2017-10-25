#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0;
	char ch;
	while (cin >> ch){
		switch(ch){
			case 'a': case 'A':
				++acnt;
				break;
			case 'e': case 'E':
				++ecnt;
				break;
			case 'i': case 'I':
			    ++icnt;
			    break;
			case 'o': case 'O':
				++ocnt;
				break;
			case 'u': case 'U':
			    ++ucnt;
			    break;
		}
	}
	cout << "Number of vowel a: \t" << acnt << '\n'
		 << "Number of vowel e: \t" << ecnt << '\n'
		 << "Number of vowel i: \t" << icnt << '\n'
		 << "Number of vowel o: \t" << ocnt << '\n'
		 << "Number of vowel u: \t" << ucnt << endl;
	return 0;
}