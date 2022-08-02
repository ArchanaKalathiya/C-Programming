// Program to find first n numbers of FIBONACII SERIES
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, nextterm = 0;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << a << " ";
    cout << b;
    for (int i = 1; i < n; ++i)
    {
        nextterm = a + b;
        a = b;
        b = nextterm;
        cout << ", " << nextterm;
    }
    return 0;
}