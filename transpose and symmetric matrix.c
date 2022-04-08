/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], b[10][10], count = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	//Transpose of matrix 
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j; columns++)
    	{
      		b[columns][rows] = a[rows][columns];
    	}
  	}
     
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
    		if(a[rows][columns] != b[rows][columns])
    		{
    		count=1;
    		break;
			}
   	 	}
  	}
  	if(count == 1)
  	{
  		printf("\n The Matrix that you entered is not a Symmetric Matrix ");
	}
	else
	{
		printf("\n The Matrix that you entered is a Symmetric Matrix ");
	}
  	
 	return 0;
}
