/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right_child;
    struct node *left_child; 
};

struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;

    return p;
}

struct node* insert(struct node *root, int x)
{
 
    if(root==NULL)
        return new_node(x);
    else if(x>root->data) 
        root->right_child = insert(root->right_child, x);
   
        root->left_child = insert(root->left_child,x);
    return root;
}
struct node* search(struct node *root, int x)
{
    if(root==NULL || root->data==x) 
        return root;
    else if(x>root->data) 
        return search(root->right_child, x);
    else 
        return search(root->left_child,x);
}

struct node* find_maximum(struct node *root)
{
    if(root == NULL)
        return NULL;
    else if(root->right_child != NULL) 
        return right_minimum(root->right_child); 
    return root;
}

int main()
{
    
      struct node *root;
    root = new_node(20);
   find_minimum(root);
    
        insert(root,5);
    insert(root,1);
    insert(root,15);
    insert(root,9);
    insert(root,7);
    insert(root,12);
    insert(root,30);
    insert(root,25);
    insert(root,40);
    insert(root, 45);
    insert(root, 42);
    
    
     search(root,30);
     printf("%d ",find_minimum(root));
    
     return 0;
}



