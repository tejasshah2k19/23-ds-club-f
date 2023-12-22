#include<stdio.h>
#define SIZE 9 

int main(){

    //int a[] ={ 76,54	,34	,46	,76	,65	,54	,98	,90}; 
    int a[] = {9,8,7,6,5,4,3,2,1};
    int i,j,tmp,x,min; 
    int swap=0; 


    printf("\nArray before sort\n");
    for(x=0;x<SIZE;x++){
        printf(" %d",a[x]);
    }
    
    
	 for(i=1;i<SIZE;i++){
		 tmp = a[i]; 
		for(j=i-1;j>=0;j--){
			if(tmp <  a[j]){
				a[j+1]=a[j];	
			}else{
				break; 
			} 
		}
		a[j+1] = tmp; 
	 }


    printf("\nArray after sort\n");
     for(x=0;x<SIZE;x++){
        printf(" %d",a[x]);
    }

    return 0;
}