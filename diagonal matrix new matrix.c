/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Matrix
{
    int B[10];
    int n;
};

void Set (struct Matrix *m, int i, int j, int y)
{
    if (i == j)
        m->B[i - 1] = y;
}

int Get (struct Matrix m, int i, int j)
{
    if (i == j)
        return m.B[i - 1];
    else
        return 0;
}

void Display (struct Matrix m)
{
    int i, j;
    printf ("Matrix is: \n");

    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
           if (i == j)
             printf ("%d ", m.B[i]);
           else
             printf ("0 ");
        }
        printf ("\n");
    }
}

int main ()
{
    struct Matrix M;
    M.n = 5;

    Set (&M, 1, 1, 6);
    Set (&M, 2, 2, 7);
    Set (&M, 3, 3, 1);
    Set (&M, 4, 4, 9);
    Set (&M, 5, 5, 2);

    Display (M);
    return 0;
}
