#include <iostream>
using namespace std;

int
main ()
{
  // code
  double d[3] = { 1.2, 3.4, 5.6 };
  for (double x : d)
    {
      cout << x << endl;
    };

  for (int x : { 1, 2, 3 })
    {
      cout << x << endl;
    };

  for (double &x : d)
    {
      x = 0.8 * x;
      cout << x << endl;
    };
  for (double x : d)
    {
      cout << x << endl;
    };
  
  return 0;
}