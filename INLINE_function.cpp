#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    int s;
    s = a + b;
    return s;
}
int main()
{
    int x = 3, y = 4;
    cout << "the sum is=" << sum(x, y) << endl;
}