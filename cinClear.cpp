#include <iostream>
using namespace std;
const int MAX = 5;
int
main ()
{
  // int a,b;
  // cin >> a;
  // cin.clear();
  // while(cin.get() != '\n'); // 清除错误的输入
  // cin >> b;
  // cout << a << b << endl;
  // // code
  // return 0;

  double b[MAX];
  int i = 0;
  while (i < MAX && cin >> b[i])

    {
      ++i;
      /* code */
    }

  double total = 0.0;
  for (int j = 0; j < i; j++)
    {
      total += b[j];
      /* code */
    }
  if (i == 0)
    {
      cout << 0 << endl;
    }
  else
    {
      cout << total / i << endl;
    }
    return 0;
}