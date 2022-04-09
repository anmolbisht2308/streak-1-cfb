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
}*first=NULL;
void create(int A[],int n)
{     
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
struct Node * LSearch(struct Node *p,int key)
{
//  struct Node *q;
 
 while(p!=NULL)
 {
 if(key==p->data)
 return p;
 else
 p=p->next;


 
}

}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2};
 create(A,8);
 temp=LSearch(first,8);
 printf("%d",temp->data);
 
 return 0;
}

