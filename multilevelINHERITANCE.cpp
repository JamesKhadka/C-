// multilevel inheritance//
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int);
    void put_number(void);
};
void student::get_number(int a)
{
    roll_number = a;
}
void student ::put_number()
{
    cout << "Roll number:" << roll_number << "\n";
}
class Test : public student
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
    void put_marks(void);
};
void Test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void Test::put_marks()
{
    cout << "MARKS IN SAUB1=" << sub1 << "\n";
    cout << "MARKS IN SUB2=" << sub2 << "\n";
}
class Result : public Test
{
    float Total;

public:
    void display();
};
void Result::display(void)
{
    Total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "TOTAL=" << Total << "\n";
}
int main()
{
    Result student1;
    student1.get_number(111);
    student1.get_marks(55.25, 40.5);
    student1.display();
    return 0;
}