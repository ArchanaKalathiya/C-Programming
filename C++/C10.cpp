//Call by reference
#include<iostream>
using namespace std;
// void main(int &a)
// {
//     a=20;
// }

// int main()
// {
//     int num=200;
//     function(num);
//     cout<<num;
// }
void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int m=250;
    int n=300;
    swap(m,n);
    cout<<"m's value : "<<m;
    cout<<"n's value : "<<n;
    return 0; 
}