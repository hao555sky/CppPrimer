#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::noskipws;

int main()
{
	int acnt = 0, ecnt = 0, icnt = 0, ocnt = 0, ucnt = 0, blank_cnt = 0, tab_cnt = 0, new_linecnt = 0;
	char ch;
	while (cin >> noskipws >> ch){
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
			case ' ':
			    ++blank_cnt;
			    break;
			case '\n':
			    ++new_linecnt;
			    break;
			case '\t':
			    ++tab_cnt;
			    break;
		}
	}
	cout << "Number of vowel a: \t" << acnt << '\n'
		 << "Number of vowel e: \t" << ecnt << '\n'
		 << "Number of vowel i: \t" << icnt << '\n'
		 << "Number of vowel o: \t" << ocnt << '\n'
		 << "Number of vowel u: \t" << ucnt << '\n'
		 << "Number of vowel blank space: \t" << blank_cnt << '\n'
		 << "Number of vowel tab: \t" << tab_cnt << '\n'
		 << "Number of vowel new line: \t" << new_linecnt << endl;
	return 0;
}