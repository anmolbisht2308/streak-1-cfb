/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <malloc.h>
void main(){
   int i, n, sum = 0;
   int *ptr;
   printf("Enter size of array : \n");
   scanf("%d", &n);
   ptr = (int *) malloc(n * sizeof(int));
   printf("Enter elements in the List \n");
   for (i = 0; i < n; i++){
      scanf("%d", ptr + i);
   }
   //calculate sum of elements
   for (i = 0; i < n; i++){
      sum = sum + *ptr;
      *ptr++;
   }
   printf("Sum of all elements in an array is = %d\n", sum);
   return 0;
}
