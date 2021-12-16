#include <iostream>
using namespace std;

int
main ()
{
  double d[3] = { 1.0, 2.0, 3.0 };
  short s[3] = { 1, 2, 3 };

  //   等价
  cout << *(d + 1) << endl;
  cout << *s << endl;

  cout << d << endl;
  cout << s << endl;

  double *dp = d;
  short *sp = &s[0];

  cout << dp << endl;
  cout << sp << endl;

  cout << *dp << endl;
  cout << *sp << endl;

  dp++; // 跨过一个double类型的长度
  sp++; // 跨过一个short类型的长度

  cout << *dp << endl;
  cout << *sp << endl;

  //   数组名再取地址  得到的是数组的地址  但是大小不一样

  cout << d << endl;
  cout << &d << endl;

  cout << sizeof (d) << endl;
  cout << sizeof (&d) << endl;    

  cout << d + 1 << endl;
  cout << &d + 1 << endl;

  return 0;
}