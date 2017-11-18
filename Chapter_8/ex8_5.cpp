#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::fstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	string file("ex8_4.txt"), item;
	vector<string> svec;
	fstream input_stream_file(file);
	if (input_stream_file)
	{
		while(input_stream_file >> item)
			svec.push_back(item);
	}

	for(auto s : svec)
		cout << s << endl;
	return 0;
}