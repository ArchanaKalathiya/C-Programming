// Display the data of student using structure
#include <iostream>
using namespace std;

struct student
{
    string name;
    int roll_no;
    float marks;
};
int main()
{
    student s1;
    cout << "Name of the student : \n";
    cin >> s1.name;
    cout << "Roll no : \n";
    cin >> s1.roll_no;
    cout << "Marks: \n";
    cin >> s1.marks;

    cout << "--------------Student Detail --------------" << endl;
    cout << "Name of the student : " << s1.name << endl;
    cout << "Roll no of the student : " << s1.roll_no << endl;
    cout << "Marks : " << s1.marks << endl;
    return 0;
}