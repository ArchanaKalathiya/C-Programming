//Default Arguments 
#include <iostream>
using namespace std;
//A function with default Programs it can be called with 2 , 3 or 4 arguments 
int sum(int x , int y , int z=2 , int w=3)//assigning default values to z , w 
{
    return(x+y+z+w);
}
int main(){
    cout<<sum(10,15)<<endl;
    cout<<sum(10,15,25)<<endl;
    cout<<sum(10,15,25,30)<<endl;
    return 0;
}
