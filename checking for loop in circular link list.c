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
}*first=NULL,*second=NULL,*third=NULL;
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
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
int isLoop(struct Node *f)
{
 struct Node *p,*q;
 p=q=f;
 


while(q!=NULL){
    p=p->next;
    q=q->next->next;
    if(p==q)
    return 0;
    else
    return 1;
}
}
int main()
{
 struct Node *t1,*t2;
 
 int A[]={10,20,30,40,50};
 create(A,5);
 
 t1=first->next->next;
 t2=first->next->next->next->next;
 t2->next=t1;
 
 printf("%d\n",isLoop(first));
 
 
 return 0;
}
