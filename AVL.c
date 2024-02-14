#include<stdio.h>
#include<stdlib.h> 

struct node {
     int data;
     struct node *left,*right; 
     int height; 
     int bf; 
}*root=NULL;


struct node* createNode(int num){
    struct node *tmp; 
    tmp = malloc(sizeof(struct node));
    tmp->data=num;
    tmp->left = NULL;
    tmp->right = NULL; 
    return tmp; 
}
int maxOfLeftRightHeight(struct node *root){
    int l=0,r=0;

    if(root->left  != NULL){
        l = root->left->height; 
    } 
    if(root->right  != NULL){
        r = root->right->height; 
    } 

    return l  > r ? l : r ; 
    
}
int getBf(struct node *root){
    int l=0,r=0; 
      if(root->left  != NULL){
        l = root->left->height; 
    } 
    if(root->right  != NULL){
        r = root->right->height; 
    }
    return l-r; 
}
struct node* addNode(struct node *root,int num){//100,250
    struct node *tmp,*p; 
    int bf; 
    if(root == NULL){
        root = malloc(sizeof(struct node)); 
        root->data= num; 
        root->left=NULL;
        root->right= NULL;
        root->height = 1; 
        root->bf = 0;
        return root;
    }else {
        if(root->data > num){
            //left insert 
          root->left = addNode(root->left,num);
        }else if(root->data < num){
            //right insert 
           root->right = addNode(root->right,num);
        }
    
        root->height  = 1 + maxOfLeftRightHeight(root); 

        bf  = getBf(root);
        root->bf= bf; 

        if(bf > 1){
            //L
            if(root->left->data > num){
                //L 
                printf("\nLL");
            }else{
                //R 
                printf("\nLR");
            }
        }else if(bf < -1){
            //R 
            if(root->right->data > num){
                //L 
                printf("\nRL");

            }else{
                //R 
                printf("\nRR");
            }
        }

    }
    return root;
}

void inOrder(struct node *root){

    if(root != NULL){ 
        inOrder(root->left);
        printf(" %d(%d)(%d)",root->data,root->height,root->bf);
        inOrder(root->right);
    }
}

void preOrder(struct node *root){

    if(root != NULL){ 
        printf(" %d",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}


void postOrder(struct node *root){

    if(root != NULL){ 
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d",root->data);
    }
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


    inOrder(root); 

    return 0; 
}