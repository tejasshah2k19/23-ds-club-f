#include<stdio.h>
#include<stdlib.h>


struct student{
    char name[20];
    int maths;
    int sci;
    int eng;
    float perc;

};

int main(){

    struct student *s; 
    struct student *x; 
    int totalStudent = 10;//scan  

    x = (struct student*)malloc(sizeof(struct student) * totalStudent);//50*10 => 500 
    //s name 
    //dot operator 
    //pointer-> arrow  
    
    s =  (struct student*) malloc(sizeof(struct student));//25 
    printf("\nEnter name maths sci and eng detail : ");
    scanf("%s%d%d%d",&s->name,&s->maths,&s->sci,&s->eng);

    s->perc= (s->maths+s->eng+s->sci)/3.0;

    printf("\n%s  %d   %d   %d  %f",s->name,s->maths,s->sci,s->eng,s->perc);
   
   //+5  --realloc 

    return 0; 
}