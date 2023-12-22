#include<stdio.h>
#include<stdlib.h> 
#define SIZE 5 

int queue[SIZE]; //0 1 2 3 4 

int f=-1; //empty 
int r=-1; //empty 


void insert(){
    int num; 
    if(r == SIZE - 1){
        printf("\nQueue is Full");
    }else{

        if(r==-1){
            f=0; 
        } 
        printf("\nEnter number");
        scanf("%d",&num);     
        r++;
        queue[r] = num; 
    }
}

void delete(){
    //queue is empty ?
    if(f == -1){
        printf("\nQueue is Empty!!");
    }else{
        printf("\n%d is deleted",queue[f]);
        f++; 
    }
}

void display(){
    int i;
    printf("\nElements in the Queue\n");
    for(i=f;i<=r;i++){
        printf(" %d",queue[i]);
    }
}

int main()
{

    int choice ;

while(1){ 
    printf("\n1 For Insert\n2 For Delete\n3 For Display\n0 For Exit\nEnter your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
            insert();
            break;
        case 2:
            delete();break;
        case 2+1:
            display();break; 
            case 0:exit(0);
        default:
            printf("\nInvalild chocie PTA!!");
            break;
    }
}
    return 0; 
}