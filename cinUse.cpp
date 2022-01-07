// getline  get 都是获取cin的整行输入  get保留换行符

#include <cstring>
#include <iostream>

using namespace std;
int
main ()
{
  // char a[10];
  // char b[10];

  // //   cin.getline(a, 10);
  // //   cin.getline(b, 10);

  // cin.get (a, 10);
  // cin.get();
  // cin.get (b, 10);

  // cout << a << endl;
  // cout << b << endl;

  char ch;
  cin.get (ch);

  while (cin.fail () == false)
    { //不是结尾
      cout << ch ;
      cin.get (ch);
    }
  cout << "end cin" << endl;
  return 0;
}