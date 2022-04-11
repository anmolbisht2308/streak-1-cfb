/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
#include <stdlib.h>  
struct Node   //Link list node 
{
    int data;
    struct Node* next;
};
void insert(struct Node **head_ref, int new_data)     
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data = new_data;  
    new_node->next = (*head_ref);  
    (*head_ref) = new_node;  
} 
void print_Middle(struct Node *head)   
{
    struct Node *first_ptr = head;
    struct Node *second_ptr = head;
 
    if (head!=NULL)
    {
      
        while (second_ptr != NULL && second_ptr->next != NULL)
        {
            second_ptr = second_ptr->next->next;
            first_ptr = first_ptr->next;
        }
        printf("The middle element in the linked list is:  %d", first_ptr->data);
    }
}
int main() 
{ 
    struct Node* head = NULL; 
    insert(&head, 80); 
    insert(&head, 15); 
    insert(&head, 31); 
    insert(&head, 44);
    insert(&head, 92); 
    print_Middle(head); 
    return 0; 
}
