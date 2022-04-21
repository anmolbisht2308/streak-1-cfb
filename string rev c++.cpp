/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;--i)
    {
        str_rev.push_back(str[i]);
        
    }
    cout<<str_rev;
}

