#include <iostream>
#include <climits>

int main()
{
	short short_max = SHRT_MAX;
	short short_min = SHRT_MIN;

	int int_max = INT_MAX;
	int int_min = INT_MIN;

	long long_max = LONG_MAX;
	long long_min = LONG_MIN;

	long long long_long_max = LLONG_MAX;
	long long long_long_min = LLONG_MIN;

	std::cout << "char is " << sizeof(char) << " bytes" <<std::endl;
	std::cout << "short is " << sizeof(short) << " bytes" <<std::endl;
	std::cout << "int is " << sizeof(int) << " bytes" <<std::endl;
	std::cout << "long is " << sizeof(long) << " bytes" <<std::endl;
	std::cout << "long long is " << sizeof(long long) << " bytes" <<std::endl;
	std::cout << "float is " << sizeof(float) << " bytes" <<std::endl;
	std::cout << "double is " << sizeof(double) << " bytes" <<std::endl;

	std::cout << "Values of short range from " << short_min <<" to " << short_max << std::endl;
	std::cout << "Values of int range from " << int_min <<" to " << int_max << std::endl;
	std::cout << "Values of long range from " << long_min <<" to " << long_max << std::endl;
	std::cout << "Values of long long range from " << long_long_min <<" to " << long_long_max << std::endl;

	unsigned short unsigned_short_max = USHRT_MAX;

	unsigned int unsigned_int_max = UINT_MAX;

	unsigned long unsigned_long_max = ULONG_MAX;

	unsigned long long unsigned_long_long_max = ULLONG_MAX;

	std::cout << "Max values of unsigned short is " << unsigned_short_max << std::endl;
	std::cout << "Max values of unsigned int is " << unsigned_int_max << std::endl;
	std::cout << "Max values of unsigned long is " << unsigned_long_max << std::endl;
	std::cout << "Max values of unsigned long long is " << unsigned_long_long_max << std::endl;

	return 0;
}