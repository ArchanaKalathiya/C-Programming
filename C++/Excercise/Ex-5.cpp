//Write a program to find factorial 
#include<iostream>
using namespace std;
int fact(int num)
{
    if (num<1) //Factorial of 1 and 0 is 1 and if num<0 means factorial is 1
    {
        return 1;
    }
    else 
    {
        return num*fact(num-1);
    }
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"The Factorial of the entered number is : "<<fact(num);
    return 0;
}