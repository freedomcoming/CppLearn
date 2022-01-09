#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // cctype判断字符的类型
    char a = 'a';
    int b = isalnum(a);
    cout << b << endl;
    // code
    return 0;
}