/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char c[]="evrerev";

int i,j,p=0,l=0;

for(i=0;c[i]!='\0';i++)
{ int k=0;
  for(j=i+1;c[j]!='\0';j++) 
  {
      if(c[i]==c[j])
      {
          k=1;
          break;
      }
  }
  if(k==1)
  printf("%c ",c[i]);
}

return 0;
}

