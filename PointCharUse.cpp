#include <cstring>
#include <iostream>
using namespace std;
char *getname (void);

int
main ()
{
  // code
  char *name;
  name = getname ();
  cout << (int *)name << endl;
  cout << name << endl; // name是char地址，直接可以输出

  delete[] name; // name是char[] 数组
  return 0;
}
char *
getname (void)
{
  char tmp[80]; // 调用函数时生成，调用结束后释放，自动存储，局部变量
  //   自动变量存储在栈中，LIFO
  //   花括号之内的变量是局部变量
  cout << "enter name" << endl;
  cin >> tmp;

  char *pn = new char[strlen (tmp) + 1]; // 根据实际大小动态创建空间
  strcpy (pn, tmp); // char[] 只能初始赋值或者strcpy
  return pn;
}