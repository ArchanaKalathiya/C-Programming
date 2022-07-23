//Write a program to find greater number among two elements 
#include<iostream>
using namespace std;
void max(int n1, int n2)
{
    if(n1>n2)
    {
        cout<<"The larger number is " <<n1;
    }
    else{
        cout<<"The larger number is " <<n2;
    }
}
int main()
{
    int n1 , n2 ;
    cout<<"Enter n1 : ";
    cin>>n1;
    cout <<"Enter n2 : ";
    cin>>n2;
    max(n1,n2);
}