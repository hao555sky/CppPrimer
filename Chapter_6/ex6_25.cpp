#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	string content;
	for(int i = 1; i != argc; ++i){
		content.append(argv[i]);
		content += " ";
	}

	cout << content << endl;

	return 0;
}