//With return 
#include<iostream>
using namespace std;
int add(int a , int b){
    return(a+b);
}
int main(){
    int sum;
    sum=add(33,77);
    cout<<"33 + 77 = "<<sum<<endl;
    return 0;
}
