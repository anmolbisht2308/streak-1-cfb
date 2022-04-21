/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include<iostream>
using namespace std;
    
/*program for displaying day name using switch case 


*/
int main()
{
	int day;
	cout<<"enter the day no";
	cin>>day;
        switch(day)
        {
             case 1: cout<<"monday"<<endl;
                  break;
	     case 2: cout<<"tuesday"<<endl;
	          break;
             case 3: cout<<"wednesday"<<endl;
  		  break;
	     case 4: cout<<"thursday"endl;
		  break;
	     case 5: cout<<"friday"<<endl;
		  break;
	     case 6: cout<<"saturday"<<endl;
		  break;
	     case 7: cout<<"sunday"<<endl;
		  break;
	     default: cout<<"invalid day no"<<endl;
	}
	return 0;
}
