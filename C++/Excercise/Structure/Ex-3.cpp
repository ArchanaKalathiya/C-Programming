//Print details of 2 car in one structure 
#include<iostream>
using namespace std;
struct car 
{
    int year;
    string brand;
};
int main()
{
    car c1;
    c1.brand = "Lamborghini";
    c1.year=1963;

    car c2;
    c2.brand = "Porsche Macan";
    c2.year=2014;
     
    cout <<"---------------Cars------------------- "<<endl;
    cout <<c1.brand<<"  "<<"First launched in "<<c1.year<<"\n";
    cout <<c2.brand<<"  "<<"First launched in "<<c2.year<<"\n";

    return 0;

    
}