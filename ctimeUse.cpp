#include <ctime>
#include <iostream>
using namespace std;

int
main ()
{
  // code
  clock_t delay = CLOCKS_PER_SEC * 10;
  clock_t start = clock ();
  cout << delay << endl;
  cout << start << endl;
  cout << clock () << endl;

  while (clock () - start < delay)
    ;

  cout << "done" << endl;

  return 0;
}