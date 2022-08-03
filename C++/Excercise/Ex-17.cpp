//Without return and argument 
#include<iostream>
using namespace std;
int area(int l,int b){
    return (l*b);
}
float peri(float l, float b){
    return(2*(l+b));
}
int main(){
    int length , breadth ;
    cout<<"Enter the length and breadth : ";
    cin>>length>>breadth ;
    cout<<"\nArea of rectangle = "<<area(length,breadth);
    cout<<"\nPerimeter of rectangle = "<<peri(length,breadth);
    return 0;
}
