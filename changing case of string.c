/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main()
{
char c[]="Lelcome";
int i;

for(i=0;c[i]!='\0';i++)
{
    if(islower(c[i]))
    c[i]=c[i]-32;
    else
    c[i]=c[i]+32;
}

for(i=0;c[i]!='\0';i++)
{
    printf(" %c ",c[i]);
}


return 0;
}


