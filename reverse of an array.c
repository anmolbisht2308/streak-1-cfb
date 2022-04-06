/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdio.h>
  
int main() 
{
   int a[100], b[100], i, j, Size;
  
   printf("\nPlease Enter the size of an array: ");
   scanf("%d",&Size);
  
   printf("\nPlease Enter array elements: ");
   
   //Inserting elements into the array
   for (i = 0; i < Size; i++) 
   {
      scanf("%d", &a[i]);
   }
  
   for(i = Size-1, j = 0; i >= 0; i--, j++) 
   {
      b[j] = a[i];     
   }
  
   printf("\nResult of an Reverse array is: ");
   for (i = 0; i < Size; i++) 
   {
      printf("%d \t", b[i]);
   }
  
   return 0;
}
