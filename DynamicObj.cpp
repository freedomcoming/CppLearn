
#include <iostream>
using namespace std;

class Box
{
public:
    Box() {
        cout << "new obj" << endl;
    }
    ~Box() {
        cout << "delete obj" << endl;
    }
};

int main()
{
    Box* myBoxArray = new Box[4];

    delete[] myBoxArray;
    return 0;
}