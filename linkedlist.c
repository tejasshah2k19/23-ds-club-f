#include<stdio.h>
#include<stdlib.h>


struct node {
    int data; 
   struct node *next; 
}*head=NULL;

int main(){
    int num; 
    struct node *tmp; 
    printf("\nEnter number");
    scanf("%d",&num); 

    head = (struct node*)malloc(sizeof(struct node));
    head->data = num; 
    head->next = NULL; 


    printf("\nEnter number");
    scanf("%d",&num); //20 

    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = num; 
    tmp->next= NULL;
    head->next = tmp;//head->next = 3000  

    printf("\n%d ",head->data); //10 
    printf("\n%d ",head->next->data);//20  
    


    return 0; 
}