#include <iostream>
#include <climits>
using namespace std;
//char 8 
//short 16
//int 32
//long 32
//long long 64
// ��Ϊ�з��ź��޷��ŵ�����  signed  unsigned
// �����λ���Ͳ���ϵͳ�й�ϵ

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


	/*float 32 λ
	double 48λ
	long double 48λ*/

	cout << floatValue << endl;

	//true 1  false 0  ֻ��0��false  ��0��true  ������Ϊ int

	cout << "bool type" << BoolValue << endl;
	
	cout << "int" << sizeof intValue << endl;
	cout << "short" << sizeof shortValue << endl;
	cout << "char" << sizeof charValue << endl;
	cout << "long" << sizeof longValue << endl;
	cout << "long long" << sizeof longlongValue << endl;

	cout << "INT ���ֵ����Сֵ" << endl;
	//int �����Сȡֵ
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;


	cout << UINT_MAX << endl;

	cout << "char" << endl;
	//char �����Сȡֵ
	cout << CHAR_MAX << endl;
	cout << CHAR_MIN << endl;

	cout << "SHORT ���ֵ����Сֵ" << endl;
	//short �����Сȡֵ
	cout << SHRT_MAX << endl;
	cout << SHRT_MIN << endl;


	//long �����Сȡֵ
	cout << LONG_MAX << endl;
	cout << LONG_MIN << endl;


	//long �����Сȡֵ
	
	

	unsigned short uShortValue;
	uShortValue = 100;
	cout << uShortValue << endl;

	unsigned uIntValue;
	uIntValue = 100;
	cout << sizeof uIntValue << endl;


	//����
	int a1 = 042; // oct
	int b1 = 0x42; // hex

	cout << hex; // �޸���ʾ�Ľ���
	cout << a1 << b1 << endl;
}