#include <iostream>
using namespace std;
int main()
{
     int intArray[1024];
     for (int i = 0; int j = 0; i < 1024, i++)
     {
          intArray[i] = j++;
     }
     cout << "intArray[512]"
          << "\n";
     cout << "257[intArray]"
          << "\n";
     int *midArray = &intArray[512];
     cout << "midArray[-256]"
          << "\n";
     cout << "intArray[-256]"
          << "\n";
}