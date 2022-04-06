/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
void main(){
	 int i,n,sum=0,missing;
	 printf("enter the size of an array : ");
	 scanf("%d",&n);
	 int arr[n-1];
	 printf("please give value to insert in array: \n");
	 for(i=0;i<n-1;i++){
	     scanf("%d",&arr[i]);
	     sum=sum+arr[i];
	 }
	 missing = (n*(n+1))/2 - sum;
	 printf("missing number is = %d", missing);
	 getch();
}
 
