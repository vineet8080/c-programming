// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node*next;
// };
// struct node *head=NULL;

// //add the link list at the begining

// void addatbegin(){
//     int n;
//     printf("enter the data ");
//     scanf("%d",&n);
//     struct node *p;
//     p=(struct node*)malloc(sizeof(struct node));
//     p->data=n;
//     p->next=head;
//     head=p;
    
// };

// // int main(){
// //     addatbegin();
// //     addatbegin();


// // }

// //traversing


// // display
//  void traversing() {
//      if(head==NULL){
//          printf("empty ll");
//      }
//      struct node *ptr;
//      ptr=head;
     
//      while(ptr!=NULL){
//          printf("%d",ptr->data);
//          ptr=ptr->next;
//      }
     
     
//  } 

// //  int main(){
// //     addatbegin();
// //     addatbegin();

// //     traversing();
// // }



// // ADD AT END

// void insert_at_end(){
//     int num;

//     printf("\nenter the data");
//     scanf("%d",&num);

//     struct node *ptr ,*new;
//     new=(struct node*)malloc(sizeof(struct node));
//      new->data=num;
//      new->next=NULL;
//     ptr=head;
//     if (ptr!=NULL)
//     {
//         while (ptr->next!=NULL)
//         {
//             ptr=ptr->next;

//         }
//         ptr->next=new;

//     }
//     else
//     {
//         head=new;
//     }
// }

// //  int main(){
// //     addatbegin();
// //     addatbegin();

// //     traversing();
// //     insert_at_end();
// // }


// void insertatanywhere(){
//     int num,x;
//     printf("enter the data where insert");
//     scanf("%d",&num);
//      printf("enter the data where insert");
//     scanf("%d",&x);
//     struct node *ptr,*new;
//     new=(struct node*)malloc(sizeof(struct node));
//     new->data=num;
//     ptr=head;
//     while(ptr->data==x && ptr!=NULL)
//     {
//         ptr=ptr->next;
//     }
//     if (ptr->data=x)
//     {
//        new->next=ptr->next;
//        ptr->next=new;
//     }

// }

//  int main(){
//     addatbegin();
//     addatbegin();

//     traversing();
//     insert_at_end();
//     insertatanywhere();
// }


// // detete the link list


// // #include <stdio.h>
// // #include <stdlib.h>

// // void delet_at_begin (){

// // }

// ME

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Traversing function
void traversing() {

    struct node *ptr = head;

    if(ptr == NULL) {
        printf("Linked list is empty\n");
        
    }
    
    struct node *ptr=head;
  

    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
   
}


// insert at begining


void insert_at_begin(){
    int num;
    printf("enter the data which u insert at start");
    scanf("%d",&num);
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=num;
    new->next=head;
    head=new;
    return head;

}




// insert at  end 



void append(){
    int num;
    printf("Enter the data to insert at end: ");
    scanf("%d",&num);

    struct node *new, *ptr;
    new = (struct node*)malloc(sizeof(struct node));

    new->data = num;
    new->next = NULL;

    // case 1: empty list
    if(head == NULL){
        head = new;
        return;
    }

    // case 2: list already has nodes
    ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = new;
}




// insert at anywhere


void addafter(){
    int num ,x;
    printf("Enter the data to insert  ");
    scanf("%d",&num);

    printf("Enter the variable where u want  to insert  ");
    scanf("%d",&x);


    struct node *new, *ptr;
    new = (struct node*)malloc(sizeof(struct node));

    new->data = num;
    ptr=head;
    while(ptr!=NULL && ptr->data!=x){
        ptr=ptr->next;

    }   
    if (ptr->data==x)
    {
        new->next=ptr->next;
        ptr->next=new;
    }
    
}



int main(){
     insert_at_begin();
     insert_at_begin();
     insert_at_begin();
     traversing();
     append();
     append();
     traversing();
     addafter();



}


// CHATGPT 


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Traversing
void traversing() {
    struct node *ptr = head;   // ✔ pehle declare

    if(ptr == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Insert at beginning
void insert_at_begin(){
    int num;
    printf("Enter data: ");
    scanf("%d",&num);

    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));

    new->data = num;
    new->next = head;
    head = new;
}

// Insert at end
void append(){
    int num;
    printf("Enter data at end: ");
    scanf("%d",&num);

    struct node *new, *ptr;
    new = (struct node*)malloc(sizeof(struct node));

    new->data = num;
    new->next = NULL;

    if(head == NULL){
        head = new;
        return;
    }

    ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = new;
}

// Insert after value
void addafter(){
    int num, x;
    printf("Enter new data: ");
    scanf("%d",&num);

    printf("Insert after value: ");
    scanf("%d",&x);

    struct node *ptr = head;

    while(ptr != NULL && ptr->data != x){
        ptr = ptr->next;
    }

    if(ptr == NULL){
        printf("Value not found\n");
        return;
    }

    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = num;

    new->next = ptr->next;
    ptr->next = new;
}

// Main
int main(){
    insert_at_begin();
    insert_at_begin();
    insert_at_begin();

    traversing();

    append();
    append();

    traversing();

    addafter();

    traversing();

    return 0;
}