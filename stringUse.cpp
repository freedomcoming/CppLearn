#include <cstring>
#include <iostream>
// #include <string>

using namespace std;

int
main ()
{
  char dog[] = "dog";
  char cat[] = "cat";
  string str = "abc";
  char voidStr[10];

  // 单引号字符
  // 双引号字符串

  cout << dog << cat << endl;

  cout << "I am a "
          "big one.";
  //    计算字符长度
  //    cin 把空白字符作为结尾
  cout << "" << endl;
  cout << strlen (voidStr) << endl;
  cout << strlen (dog) << endl;
  cout << str.length () << endl;
  cout << str.size () << endl;

  strcpy (dog, cat);
  strcat (dog, cat);

  cout << dog << endl;

  return 0;
}