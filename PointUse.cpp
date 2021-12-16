#include <iostream>


int main() {
	int *ip = 0;
	int var = 120;
	ip = &var;

	int *ip2 = &var;
	// 指针在本操作系统 8bytes
	std::cout << "memory address:" << *ip2 << std::endl;
	std::cout << "memory address:" << ip << std::endl;
	std::cout << "value is:" << *ip << std::endl;
	std::cout << "value is:" << *&var << std::endl;

	return 0;
}


