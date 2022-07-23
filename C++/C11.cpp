//Recursion - Function calls itself
//Syntax
//Void recursion()
//{
//     recusion();
// }
// int main()
// {
//     recursion();
// }

//Sum of natural numbers
#include<iostream>
using namespace std;
int sum(int num)
{
    if(num!=0)
    {
        return num+sum(num-1);
    }
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Sum is : "<<sum(num);
    return 0;
}

