/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node
{
 int coeff;
 int exp;
 struct Node *next;
}*poly=NULL;
void create()
{
 struct Node *t,*last=NULL;
 int num,i;
 
 printf("Enter number of terms");
 scanf("%d",&num);
 printf("Enter each term with coeff and exp\n");
 
 for(i=0;i<num;i++)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 scanf("%d%d",&t->coeff,&t->exp);
 t->next=NULL;
 if(poly==NULL)
 {
 poly=last=t;
 }
 else
 {
 last->next=t;
 last=t;
 }
 }
}
void Display(struct Node *p)
{
 while(p)
 {
 printf("%dx%d +",p->coeff,p->exp);
 p=p->next;
 }
 printf("\n");
}
long Eval(struct Node *p, int x)
{
 long val=0;
 
 while(p)
 {
 val+=p->coeff*pow(x,p->exp);
 p=p->next;
 }
 return val;
}
int main()
{
 create();
 Display(poly);
 printf("%ld\n",Eval(poly,1));
 return 0;
}

