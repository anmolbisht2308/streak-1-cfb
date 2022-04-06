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

int i,j,k,c[100];
int max=arr[0];
int min=arr[0];
for(i=0;i<N-1;i++)
{
    for(j=i+1;j<N;j++)
    {
        if(arr[j]>max)
        max=arr[j];
        if(arr[j]<min)
        min=arr[j];
    }
    
}

// printf(" max = %d and min = %d ",max,min);

for(k=min;k<max;k++)
c[k]=0;

for(i=0;i<N;i++)
c[arr[i]]++;

for(k=min;k<max;k++)
{
    if(c[k]==0)
    {
        printf("%d ",k);
    }
}


}


int main()
{

	int arr[] = { 6, 7, 10, 11, 13 };

	int N = sizeof(arr) / sizeof(int);


	printMissingElements(arr, N);
	return 0;
}


