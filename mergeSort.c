#include<stdio.h>
#define S1 5 
#define S2 5 
#define S3 10 

//partition
//mergeSort 

int main(){
 
    int x[] = {11,22,33,44,55};
    int y[] = {10,20,30,60,70}; 
    int z[S3]; 

    int i,j,k; 
    //divide 

    for(i=0,j=0,k=0;  i < S1 && j < S2 ;){
        if(x[i] < y[j]){
            z[k] = x[i]; 
            i++;
            k++;
        }else{
            z[k] = y[j];
            j++;
            k++;
        }
    }

    if( i < S1){
        while(i<S1){
            z[k++] = x[i++];
        }
    }


    if( j < S2){
        while(j<S1){
            z[k++] = y[j++];
        }
    }

    // print x
    // print y 
    // print z 

    return 0; 

}