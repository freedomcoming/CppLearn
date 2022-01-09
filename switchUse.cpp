#include <iostream>
using namespace std;

int
main ()
{
  cout << "1"
       << "2" << endl;

  int a;
  cin >> a;
  switch (a)
    {
    case 1:
      /* code */
      cout << 1 << endl;
      break;

    default:
      cout << "other" << endl;
      break;
    }
  // code
  return 0;
}