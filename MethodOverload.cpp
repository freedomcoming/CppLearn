#include <iostream>
using namespace std;

class MethodOverload
{
public:

	MethodOverload(){
		cout << "creat class obj" << endl;
	}
	void print_(int i)
	{
		cout << "int: " << i << endl;
	}
	void print_(char c[])
	{
		cout << "char: " << c << endl;
	}
	void print_(double d)
	{
		cout << d << endl;
	}
};

int main()
{
	MethodOverload pd;
	pd.print_(1);
	pd.print_("abc");
	pd.print_(0.01);
	return 0;
};