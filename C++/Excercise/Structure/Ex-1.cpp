// Write a Program containing data of employee working is company using structures

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

    cout << "---------------Data of employee-------------"
         << "\n";
    cout << "Name of the employee : " << m.name << endl;
    cout << "Age of employee : " << m.age << endl;
    cout << "Salary : " << m.salary << " Lac" << endl;
    return 0;
    
}
