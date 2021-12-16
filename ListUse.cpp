#include <iostream>
int main()
{
	int n[10]{};
	for (int a = 0; a < 10; a++)
	{
		n[a] = 100 * a;
	}
	for (int j = 0; j < 10; j++)
	{
		std::cout << n[j] << std::endl;
	}

	int yams[3]{0,1,2};
	// int yams[3] = {0,1,2};


	std::cout << sizeof yams << std::endl;

	std::cout << "数组长度是" << std::endl;

	std::cout << sizeof yams / sizeof (int) << std::endl;


	return 0;
}