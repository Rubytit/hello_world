#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 6, temp;
    cout << "\n";
    cout << "Before swaping: " << endl;
    cout << "a=" << a << ", b = " << b << endl;

    temp=a;
    a=b;
    b=temp;

    cout << "\n After swaping: " << endl;
    cout << "a=" << a << ", b = " << b << endl;
    cout << "\n";
    return 0;
}