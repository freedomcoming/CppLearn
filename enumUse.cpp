// 其成员是整形类型
// 使用枚举是为了定义符号常量，不是创建新的类型
#include <iostream>
using namespace std;
enum enumValue{ red, blue, black };

int main()
{
    enumValue e;
    e=red;
    cout << e << black << endl;
    return 0;
}

