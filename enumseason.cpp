#include <iostream>
using namespace std;
enum season
{
    spring = 10,
    summer = 20,
    autumn = 30,
    winter = 40,

};
int main()
{
    season s;
    s = winter;
    cout << "WINTER:" << s << endl;
}