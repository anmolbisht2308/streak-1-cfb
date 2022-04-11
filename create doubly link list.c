/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Node {
   int data;
 
	
   struct node *next;
   struct node *prev;
};


struct Node *first = NULL;


struct Node *last = NULL;





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


void display(struct Node *ptr) {

   
  
	
   
   printf("[");
	
   while(ptr != NULL) {        
      printf("%d ",ptr->data);
      ptr = ptr->next;
   }
	
   printf("]");
}




void main() {
    int A[]={4,6,8,10,13};
    create(A,5);
    display(first);
 

  
}
