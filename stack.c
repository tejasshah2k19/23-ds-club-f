#include<stdio.h>
#define SIZE 5 

int stack[SIZE];
int top=-1; //empty 

void push(int num){
    if(top == SIZE - 1){
        printf("\nSTACK OVERFLOW ");
    }else{
        top++;
        stack[top] = num; 
    }
}

int empty(){
    if(top == -1)
        return 1; 
    else 
        return 0;
}
int pop(){
    if(empty()){
        printf("\nSTACK UNDEFLOW");
        return -1; 
    }else{
        return stack[top--];
    }
}

void dispaly(){
    int i;
    for(i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }
}

int peek(){
    if(empty())
        return -1;
    else
        return stack[top];
}

int peep(int loc){
    int index; 
    if(top == -1)
    return -1;
    else {
        index = top-loc+1; //0 
        if(index < 0 || index > SIZE-1){
            return -1;
        }else{ 
            return stack[top-loc+1]; 
        }
    }
}

int main(){


    int choice; 
    int num; 
    int location ; 

    while(1){ 
        printf("\n1 For Push\n2 For Pop\n3 For Display\n4 For Peep\n5 For Peek\n0 For Exit\nEnter Chocie");
        scanf("%d",&choice); 

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d",&num);
            push(num);
            break;
        case 2:
            num = pop(); //-1 
            if(num != -1){
                printf("\n%d poped",num);
            }
            break; 
        case 3:
            dispaly();
            break;
        case 4:
            printf("\nEnter Location");
            scanf("%d",&location);
            num = peep(location);
            if(num !=- 1){
                printf("\n %d",num); 
            }
            break;
        case 5:
            num = peek();
            if(num != -1){
                printf(" %d",num); 
            }
            break; 
        case 0:
            exit(0);
        default:
            printf("\nInvalid Choice PTA");
            break;
        }
    }
    return 0; 
}