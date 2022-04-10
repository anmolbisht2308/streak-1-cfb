/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*Head;
void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 Head=(struct Node*)malloc(sizeof(struct Node));
 Head->data=A[0];
 Head->next=Head;
 last=Head;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=last->next;
 last->next=t;
 last=t;
 }
}

void RDisplay(struct Node *h)
{
 static int flag=0;
 if(h!=Head || flag==0)
 {
 flag=1;
 printf("%d ",h->data);
 RDisplay(h->next);
 }
 flag=0;
}


int main()
{
 int A[]={2,3,4,5,6};
 create(A,5);
 
 
 
 RDisplay(Head);
 return 0;
}

