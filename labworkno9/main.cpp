#include <iostream>
#include "Array.h"

using namespace std;

int main() {

    Array a(3), b(3);


    cout << "Enter 3 elements for Array A:\n";
    cin >> a;

    cout << "Enter 3 elements for Array B:\n";
    cin >> b;


    cout << "\nArray A: " << a << '\n';
    cout << "Array B: " << b << '\n';


    if (a == b)
        cout << "A and B are equal.\n";
    else
        cout << "A and B are NOT equal.\n";


    cout << "\nAccessing A[1] using []: " << a[1] << '\n';
    a[1] = 99;
    cout << "Modified A[1] to 99: " << a << '\n';


    cout << "Setting A(2, 77)...\n";
    a(2, 77);
    cout << "Array A after setting index 2 to 77: " << a << '\n';


    cout << "\nApplying prefix increment (++A)...\n";
    ++a;
    cout << "Array A after prefix increment: " << a << '\n';


    cout << "\nApplying postfix increment (A++)...\n";
    Array temp = a++;
    cout << "Array A after postfix increment: " << a << '\n';
    cout << "Array returned by A++ (original A): " << temp << '\n';

    return 0;
}
