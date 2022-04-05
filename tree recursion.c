/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void TreeRecursion(int n) {
    if (n > 0) {
        printf("%d\n", n);
        TreeRecursion(n - 1);
        TreeRecursion(n - 1);
    }
}
int main() {
    int x = 5; 
    TreeRecursion(x);
}