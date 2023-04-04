#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;

};
void display(struct node *p){
    while(p!=NULL){
        printf("element : %d\n",p->data);
        p=p->next;
    }
}

struct node *insertion_beg(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct node *insertion_with_index(struct node *head,int index,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p = head ;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
   
    return head;
}

struct node *insert_end(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    
    return head;
}

struct node *insert_after_a_node(struct node *head,struct node *prev,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));

    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
    
    return head;
}

    int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data=20;
    head->next=first;

    first->data=21;
    first->next=second;

    second->data=22;
    second->next=third;

    third->data=23;
    third->next=NULL;

    // head=insertion_beg(head,100);
    // display(head);
    // printf("****************************\n\n");
    // int index,value;
    // printf("Enter the index and the value \n");
    // scanf ("%d%d",&index,&value);
    // head=insertion_with_index(head,index,value);
    // display(head); 
    // printf("****************************\n\n");
    // head=insert_end(head,10);
    // display(head);
    // printf("****************************\n\n");
    head = insert_after_a_node(head,second,300);
    display(head);


    
    return 0;
}