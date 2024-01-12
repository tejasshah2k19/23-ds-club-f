#include<stdio.h>
#define S1 5 
#define S2 5 
#define S3 10 

//partition
//mergeSort 

void partition(int x[],int start,int end){//0,5  0,2 3,5 
    
    if(start < end ){ 
        int mid = (start + end)/2; // 2 
        
        partition(x,start,mid);
        partition(x,mid+1,end); 

        mergeSort(x,start,mid,end); 
    }
}

void mergeSort(int x[],int start,int mid,int end ){
    int i,j,k; 
    int a[mid]; 
    int b[mid];

    for(i=start,j=0;i<=mid;i++,j++){
        a[j] = x[i]; 
    }
    
    for(i=mid+1,j=0;i<end;i++,j++){
        b[j] = x[i]; 
    }
     
    // mergesort 
    
}
int main(){
 
    int x[] = {11,22,33,44,55};
     // print z 

    partition(x,0,S1);


    return 0; 

}