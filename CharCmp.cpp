#include <cstring>
#include <iostream>
using namespace std;

int
main ()
{
  // strcpm用法  相同返回0
  // 小于返回1
  // 大于返回-1
  // for在测试不等于0时继续执行，测试等于0时跳出循环
  char word[5] = "?ate";
  for (char ch = 'a'; strcmp (word, "mate"); ch++)
    {
      cout << strcmp("zate", "mate") << endl;
      cout << word << endl;
      word[0] = ch;
    }
  cout << word << endl;

  // code
  return 0;
}