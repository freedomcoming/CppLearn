#include <iostream>

using namespace std;


int main()
{

	int a = 1;
	int b = 2;

	float c = 50.25;
	float d = 11.71;
    
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	//除法操作符取决于操作数的类型
	//浮点数默认是double类型
	//没有阻止超出整形范围的功能

	cout << (int)9.01 << endl;
	cout << (char)97 << endl;
	cout << c + d << endl;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl; // 求模运算 求余数
}