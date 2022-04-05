/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;
    r = e (x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

int main ()
{
    printf ("%lf \n", e (5, 10));
    return 0;
}
