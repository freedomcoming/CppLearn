#include <iostream>
using namespace std;

int
main (void)
{
  // for的测试部分变为赋值表达式，循环仍是有效的
  // 初始值 执行测试 执行循环操作 更新用于测试的值
  for (int i = 10; i; i = i - 2)
    {
      cout << i << endl;
    }
  int x;
  cout << (x = 100) << endl;
  cout << (x < 1) << endl;
  cout << (x > 1) << endl;

  // 倒叙输出字符串
  string s = "sssb";
  for (int i = s.size () - 1; i >= 0; i--)
    {
      cout << s[i] << endl;
    }

    // a++ ++a  前置函数销量更高
  return 0;
}