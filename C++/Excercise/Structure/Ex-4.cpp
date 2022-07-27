//
#include <iostream>
using namespace std;

struct student{
    char name[5];
    int total;
    int OOPS,DBMS,DSA,SE;
    int roll_no;
};
int main()
{
    student s[3];
    for(int i=0;i<3;i++)
    {
        cout<<"---Student---   "<<i+1<<"\n";
        cout<<"\n"<<"Name of the student : ";
        cin>>s[i].name;
        cout<<"\n"<<"Roll no :";
        cin>>s[i].roll_no;
        cout<<"\n"<<"DBMS = ";
        cin>>s[i].DBMS;
        cout<<"\n"<<"DSA = ";
        cin>>s[i].DSA;
        cout<<"\n"<<"OOPS = ";
        cin>>s[i].OOPS;
        cout<<"\n"<<"SE = ";
        cin>>s[i].SE;
        cout<<"\n"<<"Total marks out of 100 "<<"\n";
        cin>>s[i].total;
    }


    for(int i=0;i<=2;i++)
    {
        cout<<"-------------Details----------------"<<endl;
        cout<<"Name of the student : "<<s[i].name<<"\n";
        cout<<"Roll no : "<<s[i].roll_no<<"\n";
        cout<<"Marks out of 100 : " <<s[i].total<<"\n"; 
    }
    return 0;
}