
// vector????array
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int
main ()
{
  vector<int> obj;
  for (int i = 0; i < 10; i++)
    {
      obj.push_back (i);
      cout << obj[i] << ",";
    }

  for (int i = 0; i < 5; i++)
    {
      obj.pop_back ();
    }

  cout << "\n" << endl;

  for (int i = 0; i < obj.size (); i++)
    {
      cout << obj[i] << ",";
    }
  cout << "\n" << endl;
  cout << "obj size is" << endl;
  cout << obj.size () << endl;

  return 0;
}