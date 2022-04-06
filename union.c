/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void mergeSorted(int src1[], int src2[], 
  int newArr[], int n1, int n2)
{
  int i,c=0,a[100],j;
for(i=0;i<n1;i++)
{
    newArr[i]=src1[i];
    
}
for(j=0;j<n2;j++)
{
    newArr[n1+j]=src2[j];
    
}



for(i=0;i<n1+n2;i++)
{
    int k=0;
    for(j=i+1;j<n1+n2;j++)
    {
        if(newArr[i]==newArr[j])
        {
            k=1;
            break;
        }
    }
    if(k==0)
    printf("%d ",newArr[i]);
}


}

int main()
{
  
  int src1[] = {9, 18, 27, 36, 55};
  int src2[] = {10, 12, 30, 36, 50};

  
  int n1 = sizeof(src1)/sizeof(src1[0]);
  int n2 = sizeof(src2)/sizeof(src2[0]);
      
 
  int newArr[n1+n2];

  mergeSorted(src1, src2, newArr, n1, n2);

  


  return 0;
}


