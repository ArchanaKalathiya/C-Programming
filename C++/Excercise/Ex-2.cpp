//Write a program using function(call by reference)
#include<iostream>
using namespace std;
void Increment(int &s)
{
    //passing address of the variable
    s=s+5000;
    cout<<"Salary value inside increment function: "<<s<<endl;
}
int main()
{
    int sal=27000;
    Increment(sal);
    cout<<"Salary value inside main function : "<<sal<<endl;//
    return 0;
}