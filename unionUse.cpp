// union 被称为联合体或者共用体

// 只能存储int或long或double

// 只能存储一个值 长度是其最大的类型的长度

// 为了解决内存  硬件嵌入式等 系统数据结构

#include <iostream>
using namespace std;
union unionUse
{
  int int_value;
  double double_value;
  char char_value;
};

int
main ()
{
  unionUse u;
  u.char_value = 'a';
  cout << u.int_value << endl;
  cout << u.double_value << endl;
  cout << u.char_value << endl;
  return 0;
}
