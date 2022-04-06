/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>



void printMissingElements(int arr[], int N)
{

	
// 	int diff = arr[0] - 0;

// 	for (int i = 0; i < N; i++) {

	
// 		if (arr[i] - i != diff) {

		
// 			while (diff < arr[i] - i) {
// 			printf("%d ",i + diff );
// 				diff++;
// 			}
// 		}
// 	}

int i,j,k,p;
for(i=0;i<N-1;i++)
{ int k=0;
for(j=i+1;j<N;j++)
{
    if(arr[i]==arr[j])  
  {
    k=1;
    break;
  }
    
}
if(k==1)
printf("%d ",arr[i]);




}
}


int main()
{

	int arr[] = { 6, 7, 10, 11, 13,7,13 };

	int N = sizeof(arr) / sizeof(int);


	printMissingElements(arr, N);
	return 0;
}




