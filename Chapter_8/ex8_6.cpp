#include <iostream>
#include <string>
#include <fstream>
#include "../Chapter_7/ex7_26.h"

using std::string;
using std::fstream;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[])
{
	for (auto p = argv + 1; p != argv + argc; ++p)
		cout << *p << endl;
	string filename(*(argv + 1));
	fstream input_file_stream(filename);
	if (input_file_stream){
		Sales_data total;
		if(read(input_file_stream, total)){
			Sales_data trans;
			while(read(input_file_stream, trans))
			{
				if(total.isbn() == trans.isbn()){
					total.combine(trans);
				}else{
					print(cout, total) << endl;
					total = trans;
				}
			}
			print(cout, total) << endl;
		}else{
			cerr << "No data?" << endl;
			return -1;
		}
	}
	return 0;
}