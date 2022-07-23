//Print multiplication table of 5 
#include<iostream>
using namespace std;
int main()
{
    int num , prod;
    cout<<"Enter a number of table you want : ";
    cin>>num;
    for(int i=1; i<=10; i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
    
}