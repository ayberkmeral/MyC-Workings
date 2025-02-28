
#include <iostream>

#include <iomanip>

using namespace std;

int main() {

int a = 2;

char b = 'f';

float c = 3.141592f;

double d = 3;

cout << setw(3) << a << endl;

//Sets the field width to 3 characters

//setw(n) sets the width of the next output field to n characters.

cout << setw(3) << left << a << endl;

//print an integer within 3 spaces which is left aligned

//setw() right:This means that the value is aligned to the right, and any extra spaces are added to the left.

//setw() left:This aligns the value to the left, and any extra spaces are added to the right.

cout << setw(3) << a << endl;

//print an integer within 3 spaces which is right aligned

cout << '\t' << a << '\t' << b << '\t' << c << endl;

//print  horizontal tab character between a and b and c

cout << setw(9) << a << setw(8) << b << setw(13) << c << endl;

//It locates 9 spaces for a 8 for b and 13 for c

cout << d << '\t' << setprecision(1) << d << '\t' << fixed << setprecision(1) << d << endl;

//setprecision(n), it forces the output to display exactly n decimal places

// Fixed is not used thus number of digits will be the total number of digits.

//The third d is printed with one digit after the decimal point, because fixed is enabled.

cout.unsetf(ios::fixed);

// unsetf Removes the fixed formatting, restoring the default floating-point notation.

cout << d << endl;

//it is printed default



return 0;

}
