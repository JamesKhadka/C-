#include <iostream>
using namespace std;
int swap(int a, int b)
{
    int temp;
    a = temp;
    a = b;
    b = temp;
}
int main()
{
    int a = 2, b = 3;
    cout << "before interchanging" << endl;
    cout << "a " << a << endl;
    cout << "b " << b << endl;
    swap(a, b);
    cout << "after interchanging" << endl;
    cout << "a " << b << endl;
    cout << "b " << a << endl;
    cout << "\n";
}