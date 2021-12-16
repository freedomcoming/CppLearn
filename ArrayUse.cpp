// 长度固定 使用栈存储 安全方便


#include <iostream>
#include <array>
using namespace std;

int main()
{
    // code
    array<int,3> intArray;
    intArray[0] = 1;
    intArray[1] = 2;
    // intArray[2] = 3;

    cout << intArray[0] << endl;
    cout << intArray.size() << endl;
    return 0;
}