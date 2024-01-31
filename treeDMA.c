#include<stdio.h>

struct node {
    int data;
     struct node *left,*right; 
}*root=NULL;


struct node* createNode(int num){
    struct node *tmp; 
    tmp = malloc(sizeof(struct node));
    tmp->data=num;
    tmp->left = NULL;
    tmp->right = NULL; 
    return tmp; 
}
struct node* addNode(struct node *root,int num){//100,250
    struct node *tmp,*p; 
    if(root == NULL){
        root = malloc(sizeof(struct node)); 
        root->data= num; 
        root->left=NULL;
        root->right= NULL;
        return root;
    }else {
        if(root->data > num){
            //left 

            tmp = root->left;//200 
            while(tmp != NULL){
              root = tmp; //root -> 200 
              if(tmp->data < num){
                tmp = tmp->right; 
              } else{
                tmp = tmp->left; 
              } 
            } 

            //new node 
            if(num < root->data){
                //left 
                tmp = createNode(num);
                root->left = tmp; 
            }else{
                //right
                tmp = createNode(num);
                root->right = tmp; 
            }
     
        }else if(root->data < num){
            //right 
            tmp = root->right;//200 
            while(tmp != NULL){
              root = tmp; //root -> 200 
              if(tmp->data < num){
                tmp = tmp->right; 
              } else{
                tmp = tmp->left; 
              } 
            } 

            //new node 
            if(num < root->data){
                //left 
                tmp=createNode(num);
                root->left = tmp; 
            }else{
                //right
                tmp=createNode(num);
                root->right = tmp; 
            }
        }
    }

    return root;
}
int main(){

    int i; 
    int num; 
    int totalElement; 


    printf("\nHow many nodes you want to create? ");
    scanf("%d",&totalElement); // 7 , 11 , 32 

    for(i=1;i<=totalElement;i++){ // 7 
        printf("\nEnter data");
        scanf("%d",&num); //100 150

        root = addNode(root,num);//100  150 250 
    }


    return 0; 
}