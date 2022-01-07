#include <iostream>
using namespace std;

int
main ()
{
  int TDA[2][2] = { { 10, 2 }, { 3, 4 } };
  cout << **TDA << endl;

  int ODA[2] = {1,2};
  cout << *ODA << endl; 


  // code
  return 0;
}