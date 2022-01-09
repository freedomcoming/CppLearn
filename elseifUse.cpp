#include <iostream>
using namespace std;
const int Fave = 27;
int
main ()
{
  // 类型提升  char+1  = int
  //   判断可以是 if（常量==变量），防止把==写成= ，编译器不报错
  int n;

  do
    {
      cin >> n;
      if (n < Fave)
        {
          cout << "n is low" << endl;
        }
      else if (n > Fave)
        {
          cout << "n is big" << endl;
          /* code */
        }
      else
        {
          cout << "right number" << endl;
        }

      /* code */
    }
  while (n != Fave);

  // code
  return 0;
}