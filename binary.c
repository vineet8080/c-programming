// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *left,*right;
    
};
struct node *root=NULL;

void insert(){
    int num;
    printf("enter the data");
    scanf("%d",&num);
    struct node *temp,*p,*pre;
    temp=(struct node*)malloc(sizeof(struct node));
    
    if(root==NULL){
        temp->data=num;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
        
    }
    else{
        p=root;
        pre=NULL;
        while(p!=NULL)
        {
            pre=p;
            if(num < p->data){
                p=p->left;
            }else{
                p=p->right;
            }
        }
            temp->data=num;
            temp->left=NULL;
            temp->right=NULL;
            if(num<pre->data){
                pre->left=temp;
            }else{
                pre->right=temp;
            }
        
    }
}

void inorder( struct node *p){
    if(p!=NULL){
        inorder(p->left);
        printf("%d",p->data);
        inorder(p->right);
    }
}


void preorder( struct node*p){
    if(p!=NULL){
        printf("%d",p->data);
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder( struct node*p){
    if(p!=NULL){
        postorder(p->left);
        postorder(p->right);
        printf("%d",p->data);
    }
}

void main() {
    insert();
    insert();
    insert();
    insert();
    insert();
    printf("\ninorder squence");
    inorder(root);
    printf("\npreoder squence");
    preorder(root);
    printf("\npostorder sqence");
    postorder(root);

}





