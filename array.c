#include<stdio.h>
#include<stdlib.h>

#define SIZE 10 

int array[SIZE]; 

 

int main(){

    int choice; 
    int location,data; 
    int i,min,mid,max,search,flag; 

    while(1){ 
        printf("\nPress\n1 For Add\n2 For Display\n3 For Delete\n4 For Exit\nEnter your choice");
        scanf("%d",&choice); 

        switch (choice)
        {
        case 1:
            printf("\nEnter Loaction and Data?");
            scanf("%d%d",&location,&data);

            for(i=SIZE-1;i > location-1 ; i-- ){
                array[i] = array[i-1]; 
            }
            array[i] = data; 

            break;
        case 2:
            printf("\nElements in the ARRAY\n");
            for(i=0;i<SIZE;i++){
                printf(" %d",array[i]);
            }
            break;
        case 3: 
            printf("\nWhich Location You want to delete? "); 
            scanf("%d",&location);  //3 
            for(i=location-1;i<SIZE-1; i++){
                    array[i] = array[i+1];
            } 
            array[i] =0;
        case 4:
            exit(0); 
        case 5:
            //search 
            //num = 5 
            //found / not found 
            //linear 
            printf("\nLinear done");
            break; 
        case 6:
            //array alread sorted!! 
            printf("\nEnter Element that you want to search ?");
            scanf("%d",&search); 

            min = 0 ;
            max = SIZE - 1 ; 
            flag =0 ; 
        while(min<=max){ 
            mid = (min+max)/2; 
            if(array[mid] == search ){
                flag = 1; 
                break; 
            }else if(search > array[mid]){
                min = mid + 1 ; 
            }else if(search < array[mid]){
                max = mid - 1; 
            }
        }
        default:
            printf("\nInvalid Choice PTA");
            break;
        }
    }

    return 0; 
}