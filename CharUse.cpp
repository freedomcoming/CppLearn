#include <iostream>
using namespace std;

int main()
{
	char ch = 'A';
	ch++;

	char ch2 = 97;
	cout << ch2 << endl;
	int i = ch;
	cout << ch << endl;
	cout << i << endl;

	if (i == ch)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	cout.put(i);

	while (1)
	{
		int aa;
		cout << "ENTER A NUMBER:" << endl;
		cin >> aa;

		cout << (char)aa << endl;
	}

	return 0;
}