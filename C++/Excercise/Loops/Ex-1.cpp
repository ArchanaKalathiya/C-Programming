// Write a program of printing a pattern in square using loops
#include <iostream>
using namespace std;
int main()
{
    int size;
    int chr;
    cout << "Enter sqaure size: ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            cout << "  * ";
        }
        cout << endl;
    }
    return 0;
}