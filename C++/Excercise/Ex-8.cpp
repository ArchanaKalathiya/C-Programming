#include<iostream>
using namespace std;
int main()
{
    cout<<"char size = "<<sizeof(char)<<" bytes\n";
    cout<<"char* size = "<<sizeof(char*)<<" bytes\n";
    cout<<"int size = "<<sizeof(int)<<" bytes\n";
    cout<<"long size = "<<sizeof(long)<<" bytes\n";
    cout<<"float size = "<<sizeof(float)<<" bytes\n";
    cout<<"double size = "<<sizeof(double)<<" bytes\n";
    cout<<"string size = "<<sizeof("Archana")<<" bytes\n";
    cout<<"1.55 size = "<<sizeof(1.35)<<" bytes\n";
    cout<<"long size = "<<sizeof(long double)<<" bytes\n";
    cout<<"long long size = "<<sizeof(long long)<<" bytes\n";
    cout<<"short size = "<<sizeof(short)<<" bytes\n";
    return 0;
}
