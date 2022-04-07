/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
char c[]="welcome hi";
char d[]="welcome hi";
int i,k1,k2;

for(i=0;c[i]!='\0';i++)
{
  
}
k1=i;
for(i=0;d[i]!='\0';i++)
{
  
}
k2=i;
if(k1==k2)
{int t=0;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]!=d[i])
       { t=1;
        break;
           
       }
        
       
    }
    if(t==0)
    printf("Both are same");
    else
    printf("Both are not same");
}
else
{
    printf("Both are not same");
}
return 0;
}



