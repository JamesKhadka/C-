// Example of ponter
#include <iostream>
using namespace std;
int main()
{
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;
    cout << "THE ADDRESS OF A=" << ptr1 << "\n";
    cout << "THE ADDRESS OF PTR1=" << ptr2 << "\n";
    cout << "\n\n";
    cout << "AFTER INCREMENTNG THE ADDERSS VALUE :"
         << "\n";
    ptr1 += 2;
    cout << "THE ADDRESS OF A=" << ptr1
         << "\n";
    ptr2 += 2;
    cout << "THE ADDRESS OF PTR1=" << ptr2 << "\n";
}