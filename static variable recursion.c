/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fun(int n)
{
     static int x=0;
     
     while(n>0)
     {
         x++;
        return(fun(n-1)+x);
     }
     return 0;
     
}

int main()
{
     int a=5,z;
    z=fun(a);
    printf("%d",z);
}
