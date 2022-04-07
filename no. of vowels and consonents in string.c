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
char c[]="welcome hi what is upU";
int i,k=0,t=0; 

for(i=0;c[i]!='\0';i++)
{
  if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U')
  k++;
  else t++;
}

// for(i=0;c[i]!='\0';i++)
// {
//     printf(" %c ",c[i]);
// }

printf("No. of vowels are %d and No. of consonents are %d",k,t);
return 0;
}




