//Write a program using function (Call by value)
#include<iostream>
using namespace std;

void Salary_Change(int s)
{
    s=30000;
    cout<<"Salary value inside function :"<<s<<endl;
}
int main()
{
    int sal=27000;
    Salary_Change(sal);
    cout<<"Salary value inside main function: "<<sal<<endl;
    return 0;
}
