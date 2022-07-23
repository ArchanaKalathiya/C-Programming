//Data types and strings 

#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    cout<<"you have entered : ";
    cout<<s<<endl;

    s.push_back('Y');
    cout<<"After using push back function"<<s<<endl;

    s.pop_back();
    cout<<"After using pop back function"<<s<<endl;
    return 0;
}