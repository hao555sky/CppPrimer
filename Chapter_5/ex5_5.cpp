/*
写一段自己的程序，使用if else语句实现把数字成绩转换成字幕成绩的要求。
*/

#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<string> svec = {"E", "D", "C", "B", "A", "A++"};

	int grade = 0;
	while(cin >> grade){
		if(grade < 60)
			cout << svec[0] << endl;
		else{
			cout << svec[(grade - 50) / 10];
			if (grade != 100){
				if ((grade % 10) > 7)
					cout << "+";
				else if((grade % 10) < 3)
					cout << "-";
			}
			cout << endl;
		}
	}
	return 0;
}