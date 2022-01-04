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
  string word = "?ate";
  for (char ch = 'a'; word != "mate"; ch++)
    {
      cout << word << endl;
      word[0] = ch;
    }
  cout << "After loop: " <<  word << endl;

  // code
  return 0;
}