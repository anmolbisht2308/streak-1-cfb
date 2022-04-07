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
char c[]="Lelcome hi what is up";
int i,k=0; 

for(i=0;c[i]!='\0';i++)
{
  if(c[i]==32)
  k++;
}

// for(i=0;c[i]!='\0';i++)
// {
//     printf(" %c ",c[i]);
// }

printf("No. of Words are %d",k+1);
return 0;
}



