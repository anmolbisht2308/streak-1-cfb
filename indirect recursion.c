/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fun1(int a)
{
    if (a > 0)
    {
        printf("%d\n", a);
        fun2(a - 1);
    }
}

void fun2(int b)
{
    if(b > 0)
    {
        printf("%d\n", b);
        fun1(b - 3);
    }
}

int main ()
{
    int v = 20; 
    fun1 (v);
}
