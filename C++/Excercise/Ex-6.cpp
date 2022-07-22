//Write a program of Fibonacci series 
//Fibonacci number is sum of its two previous numbers
#include<iostream>
using namespace std;
int fib(int num)
{
    if(num<=1)
    {
        return num;
    }
    else
    {
        return fib(num-1)+fib(num-2);
    }
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<< fib(i)<<" ";
    }
    return 0;
}