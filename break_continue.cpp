#include <iostream>
using namespace std;

int
main ()
{
  int d[3] = { 1, 2, 3 };
  for (int x : d)
    {
      if (x == 2)
        {
          // break;
          continue;
        }
      cout << x << endl;
    };
  return 0;
}