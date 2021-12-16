#include <iostream>
using namespace std;

int main()
{
    // 指针正在的用武之地是，运行阶段分配未命名的内存以存储值
    // new int 返回内存块首地址
    // new 存储在堆或者自由存储区中
    // 变量和指针存储在栈中
    // 内存耗尽，new返回空指针

    // 配对使用new和delete  否则 memory leak

    // delete 只会删除指针指向的内存空间，而不是指针本身

    // int * p = new int[10] 访问元素 p[0] p[1]

    // C++ 将数组名解释位地址

    double *p3 = new double[3];
    p3[0] = 1.01;
    p3[1] = 2.01;
    p3[2] = 3.01;

    // 指针本身指向第一个元素
    cout << *p3 << endl;

    cout << *(p3+1) << endl;

    cout << *(p3+2) << endl;

    delete[] p3;

    cout << *p3 << endl;

    cout << *(p3+1) << endl;

    cout << *(p3+2) << endl;

    return 0;
}