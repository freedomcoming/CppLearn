#include <iostream>
#include <unistd.h>
using namespace std;

int
main ()
{
  // code
  int a = 1;
  while (a)
    {
      cout << a << endl;
      a++;

      sleep (1);
      /* code */
    }

  return 0;
}