#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Input number " << n << " is even ";
    else
        cout << "Input number " << n << " is odd ";

    return 0;
}