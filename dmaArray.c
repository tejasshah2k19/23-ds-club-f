#include<stdio.h>
#include<stdlib.h>

int main(){
       
    int *a; 
    int i; 
 
    a = calloc(5,sizeof(int)); 


    for(i=0;i<5;i++){
        printf("\nEnter Value");
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        printf("\n %d", a[i]);
    }

    free(a); 
    //a 

    return 0;
}