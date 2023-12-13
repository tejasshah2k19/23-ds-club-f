#include<stdio.h>
#define SIZE 10 

int array[SIZE]; 

 

int main(){

    int choice; 
    int location,data; 
    int i; 

    while(1){ 
        printf("\nPress\n1 For Add\n2 For Display\n3 For Delete\n4 For Exit\nEnter your choice");
        scanf("%d",&choice); 

        switch (choice)
        {
        case 1:
            printf("\nEnter Loaction and Data?");
            scanf("%d%d",&location,&data);

            break;
        case 2:
            printf("\nElements in the ARRAY\n");
            for(i=0;i<SIZE;i++){
                printf(" %d",array[i]);
            }
    
        case 4:
            exit(0); 
        default:
            printf("\nInvalid Choice PTA");
            break;
        }
    }

    return 0; 
}