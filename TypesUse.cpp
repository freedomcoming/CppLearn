#include <iostream>
#include <climits>
using namespace std;
//char 8 
//short 16
//int 32
//long 32
//long long 64
// 分为有符号和无符号的两种  signed  unsigned
// 具体的位数和操作系统有关系

int main()
{
	int intValue; 
	short shortValue;
	char charValue;
	long longValue;
	long long longlongValue;
	bool BoolValue;
	BoolValue = false;
	float floatValue = 9E-10;


	/*float 32 位
	double 48位
	long double 48位*/

	cout << floatValue << endl;

	//true 1  false 0  只有0是false  非0是true  可提升为 int

	cout << "bool type" << BoolValue << endl;
	
	cout << "int" << sizeof intValue << endl;
	cout << "short" << sizeof shortValue << endl;
	cout << "char" << sizeof charValue << endl;
	cout << "long" << sizeof longValue << endl;
	cout << "long long" << sizeof longlongValue << endl;

	cout << "INT 最大值和最小值" << endl;
	//int 最大最小取值
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;


	cout << UINT_MAX << endl;

	cout << "char" << endl;
	//char 最大最小取值
	cout << CHAR_MAX << endl;
	cout << CHAR_MIN << endl;

	cout << "SHORT 最大值和最小值" << endl;
	//short 最大最小取值
	cout << SHRT_MAX << endl;
	cout << SHRT_MIN << endl;


	//long 最大最小取值
	cout << LONG_MAX << endl;
	cout << LONG_MIN << endl;


	//long 最大最小取值
	
	

	unsigned short uShortValue;
	uShortValue = 100;
	cout << uShortValue << endl;

	unsigned uIntValue;
	uIntValue = 100;
	cout << sizeof uIntValue << endl;


	//进制
	int a1 = 042; // oct
	int b1 = 0x42; // hex

	cout << hex; // 修改显示的进制
	cout << a1 << b1 << endl;
}