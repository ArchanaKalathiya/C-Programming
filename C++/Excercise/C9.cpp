//Functions 
//Call by value
#include<iostream>
using namespace std;
void swapit(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x=120;
    int y=150;
    swapit(x,y);
    cout<<"X's value : "<<x<<endl;
    cout<<"Y's value : "<<y;
    return 0; 
}