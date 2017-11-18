#include <iostream>
#include <string>
#include <fstream>
#include "../Chapter_7/ex7_26.h"

using std::string;
using std::fstream;
using std::ofstream;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char const *argv[])
{
	for (auto p = argv + 1; p != argv + argc; ++p)
		cout << *p << endl;
	string input_file(*(argv + 1)), out_file(*(argv + 2));
	fstream input_file_stream(input_file), out_file_stream;
	out_file_stream.open(out_file, ofstream::app);
	if (input_file_stream && out_file_stream){
		Sales_data total;
		if(read(input_file_stream, total)){
			Sales_data trans;
			while(read(input_file_stream, trans))
			{
				if(total.isbn() == trans.isbn()){
					total.combine(trans);
				}else{
					print(out_file_stream, total) << endl;
					total = trans;
				}
			}
			print(out_file_stream, total) << endl;
		}
	}else{
		cerr << "No data?" << endl;
		return -1;
	}
	return 0;
}