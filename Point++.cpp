#include <iostream>
using namespace std;

int main()
{
    // code
    double arr[5] = {21.1,32.5,31.1,54.1,89.5};
    double *pt = arr;

    cout << *pt << endl;
    cout << *++pt << endl;
    cout << ++*pt << endl;
    cout << (*pt)++ << endl;
    cout << *pt++ << endl;
    cout << *pt << endl;
    return 0;

}