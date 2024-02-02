#include<stdio.h>
#include<stdlib.h>

struct node{
    int data; 
    struct node *left,*right; 
}*root=NULL;

int main(){

    struct node *l,*r;

    root = malloc(sizeof(struct node));
    root->data = 56;
    root->left = NULL; 
    root->right = NULL;

    l = malloc(sizeof(struct node));
    l->data = 34;
    l->left=NULL;
    l->right=NULL; 

    r = malloc(sizeof(struct node));
    r->data = 230;
    r->left = NULL;
    r->right = NULL; 


    root->left = l; 
    root->right = r; 


    printf("\n Root => %d",root->data);

    printf("\n Root Left => %d",root->left->data);

    printf("\n Root Right => %d",root->right->data);
    
    

    return 0;
}