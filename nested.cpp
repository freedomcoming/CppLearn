#include <iostream>
using namespace std;
const int CITYS = 5;
int
main ()
{

  // 字符指针数组
  char *cities[CITYS] = { "china", "USA", "JP", "KO", "UK" };

  cout << cities[0] << endl;

  // code
  return 0;
}