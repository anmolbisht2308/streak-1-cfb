/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void hanoifun(int n, char s, char i, char d)//fr=from rod,tr =to rod, ar=aux rod
{
    if (n == 1)
    {
        printf("\n Move disk %d  %c to  %c",n,s, d);
        return;
    }
    hanoifun(n-1, s,d, i);
    printf("\n Move disk %d %c to  %c",n,s, d);
    hanoifun(n-1, i, s, d);
}

int main()
{
    int n = 2; // n immplies the number of discs
    hanoifun(n, 'A', 'B', 'C');  // A, B and C are the name of rod
    return 0;
}

