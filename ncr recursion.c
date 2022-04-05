/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int rec_ncr(int n,int r)
{
if(r==0|r==n)
  return 1;
else
  return rec_ncr(n-1,r-1)+rec_ncr(n-1,r);
}

void main()
{
int n,r;
printf("Enter n and r");
scanf("%d%d",&n,&r);
printf("The value of %dC%d is %d",n,r,rec_ncr(n,r));
}


