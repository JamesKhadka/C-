// this operator//
#include <iostream>
#include <cstring>
using namespace std;
class person
{
    char name[20];
    int age;

public:
    void setdata(char name[], int age)
    {
        strcpy(this->name, name);
        this->age, age;
    }
    void display()
    {
        cout << "Name=" << this->name << "\n";
        cout << "Age=" << this->age << "\n";
    }
    person isElder(person p)
    {
        if (age > p.age)
        {
            return *this;
        }
        else
            return p;
    }
};
int main()
{
    person p, p1, p2;
    p1.setdata("james", 3);
    p2.setdata("sanjeev", 2);
    p = p1.isElder(p2);
    cout << "elder is:"
         << "\n";
    p.display();
    return 0;
}