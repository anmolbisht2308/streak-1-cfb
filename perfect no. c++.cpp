/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include<iostream>
using namespace std;
    
/*program for finding perfect number


*/
int main()
{
	int i,n;
	cout<<"enter the number";
	for(i=1;i<=n;i++)
	{
	     if(n%i==0)
	     {
		sum=sum+i;
	     }
	}	  
        if(2*n==sum)
		cout<<"perfect number";
        else
		cout<<"not a perfect number";	     
	return 0;
}

