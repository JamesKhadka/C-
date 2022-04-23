#include <iostream>
using namespace std;
int divide(int a = 10, int b = 2)
{
    int d;
    d = a / b;
    return d;
}
int main()
{

    cout << "the divide is=" << divide();
    cout << "\n";
}