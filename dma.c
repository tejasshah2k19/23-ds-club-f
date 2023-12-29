#include<stdio.h>
#include<stdlib.h>


int main(){
    int *a; 
    a = (int*)malloc(sizeof(int)); //4 byte  
    a = (int*)calloc(5,sizeof(int)); //array 
    free(a); 
    return 0;
}

//name[30] , maths , sci ,eng 
//perc     
//structure---> collection of multiple type of data type 

//structure vs union 

//30+4+4+4+4 => 46 
//1+4+4+4+4 =>  4 

//take 5 numbers in array and find out max from it using DMA 
