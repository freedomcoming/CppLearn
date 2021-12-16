#include <iostream>
using namespace std;

int main()
{
	// code
	// cout 发现是char地址，将打印字符串 直到\0
	// 字符串括起来的也是数组 也是第一个元素的地址 上述代码不会将整个字符串发给cout
	// 而是将首地址发给cout


	// char数组初始化可以赋值，否则只能用strcpy()和strncpy()
	char flower[10] = "rose";

	cout << flower << endl;

	cout << flower[0] << endl;


	const char *bird = "bird";
	cout << bird << endl; // bird
	cout << *bird << endl; // b
	cout << (int *)bird << endl;
	cout << &bird << endl;


	
	return 0;
}