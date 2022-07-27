// Write a Program containign data of members working is company using structures

#include <iostream>
using namespace std;
struct member
{
    int age;
    string name;
    int salary;
};

int main()
{
    member m;
    cout << "Name of the mem 1 : ";
    cin >> m.name;
    cout << "Age of mem : ";
    cin >> m.age;
    cout << "Salary : ";
    cin >> m.salary;

    cout << "---------------Data of members-------------"
         << "\n";
    cout << "Name of the mem 1 : " << m.name << endl;
    cout << "Age of mem : " << m.age << endl;
    cout << "Salary : " << m.salary << " Lac" << endl;
    return 0;
}