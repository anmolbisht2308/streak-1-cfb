/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
double maximum( double, double, double ); // function prototype
  
int main()
{
    double number1;
    double number2;
    double number3;
  
    cout << "Enter three floating-point numbers: ";
    cin >> number1 >> number2 >> number3;
  
    // number1, number2 and number3 are arguments to
    // the maximum function call
    cout << "Maximum is: "
        << maximum( number1, number2, number3 ) << endl;
    return 0;  // indicates successful termination
}
  
double maximum( double x, double y, double z )
{
    double max = x;
    if ( y > max )    // if y is larger,
        max = y;
    if ( z > max )    // if z is larger,
        max = z;
return max;       // max is largest value
  
}
