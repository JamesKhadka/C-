// manipulatoin of pointer
#include <iostream>
using namespace std;
int main()
{
    int a = 10, *ptr;
    ptr = &a;
    cout << "The value of a:" << a << "\n";
    cout << "\n";
    *ptr = (*ptr) / 2;
    cout << "The vaiue of a:" << *ptr;
}