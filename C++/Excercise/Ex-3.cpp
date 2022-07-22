//Program of addition of numbers using function
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int s;
    s=sum(5,4);
    cout<<"The result is :"<< s<<endl;
}