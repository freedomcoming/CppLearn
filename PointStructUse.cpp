#include <iostream>
using namespace std;

struct things
{
  /* data */
  int id;
  int code;
};

int
main ()
{
  // code
  // things t = { 1, 2 };
  // things *tp = &t;

  // cout << tp->code << endl;
  // cout << t.code << endl;
  // cout << tp->id << endl;

  things a, b, c;
  a.id = 1;

  things *t[3] = { &a, &b, &c }; // 新地址中，t[0] t[1] t[2]

  things **tt = t; // 指向结构体指针的地址的地址

  cout << t <<  endl; // 0x61fde0
  cout << &a << endl; // 0x61fe10
  cout << &(t[0]) << endl; // 0x61fde0
  cout << tt << endl; // 0x61fde0

  cout << t[0]->id << endl;

  cout << (&a)->id << endl;


  cout << (*tt)->id  << endl;

  

  auto ppb = t;  // 但是ppb不是数组，只是t[0]地址

  cout <<  ppb<< endl; // 0x61fde0
  cout << *ppb << endl; // 0x61fe10
  cout << (*ppb)->id  << endl; 
 
  return 0;
}