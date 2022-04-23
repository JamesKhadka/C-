#include <iostream>
using namespace std;
class employee
{
    char name[30];
    float age;
    void getdata(void);
    void putdata(void);
};
void employee ::getdata()
{
    cout << "enter name"
         << "\n";
    cin >> name;
    cout << "enter age"
         << "\n";
    cin >> age;
}
void employee ::putdata()
{
    cout << "name" << name << "\n";
    cout << "age" << age << "\n";
}
const int size = 3;
int main()
{
    employee manager[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\n detail of manager" << i + 1 << "\n";
        manager[i].getdata();
    }
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\n manager" << i + 1 << "\n";
        manager[i].putdata();
    }
}