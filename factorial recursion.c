/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int fact(int a)

{

    if (a == 0)

        return 1;

    else

        return(a * fact(a-1));

}

void main()

{

    int num;

   

    printf("Please enter a number for factorial :" );

    scanf("%d", &num);

   

    printf("The factorial is %d ",fact(num));

    return 0;

}

