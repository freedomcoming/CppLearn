#include <iostream>
using namespace std;

int
main ()
{
  int spaces = 0;
  int total = 0;
  char ch;

  cin.get (ch);
 
  while (ch != '.')
    {
      if (ch == ' ')
        ++spaces;

      ++total;
      cin.get(ch);
      /* code */
    }

  cout << "spaces:" << spaces << endl;
  cout << "total:" << total << endl;

  // code
  return 0; 
}