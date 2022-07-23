//Write a program that has an interger array declared having size 5 and fill this array by taking input from user each time then print out that array all values.
#include<iostream>
using namespace std;
int main()
{
    //declaring array
    int arr[5];
    //filling the array using for loop
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the element no. "<< i + 1 <<endl;
        cin>>arr[i];

    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}