#include <iostream>

using namespace std;


int main()
{

	int a = 1;
	int b = 2;

	float c = 50.25;
	float d = 11.71;
    
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	//����������ȡ���ڲ�����������
	//������Ĭ����double����
	//û����ֹ�������η�Χ�Ĺ���

	cout << (int)9.01 << endl;
	cout << (char)97 << endl;
	cout << c + d << endl;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl; // ��ģ���� ������
}