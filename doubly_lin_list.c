#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
    struct node *prev;

};
void display(struct node *p){
    while(p!=NULL){
        printf("element : %d\n",p->data);
        p=p->next;
    }
    // while(p!=NULL){
    //     printf("element : %d\n",p->data);
    //     p=p->prev;
    // }
}

struct node *insertion_beg(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    head->prev=ptr;
    ptr->prev=NULL;
    return ptr;
}

struct node *insert_rear(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->prev=p;
    ptr->next=NULL;
    return head;
}
struct node *insert_whith_index(struct node *head,int index,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->prev=p;
    return head;
}
struct node *delete_front(struct node *head){
    struct node *p=head->next;
    struct node *q=head;
    p->prev=NULL;
    free(q);
    return p;

}
struct node *delete_rear(struct node *head){
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
struct node *delete_index(struct node *head,int index){
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;

    free(q);
    return head;
}
struct node *delete_value(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    while(p->data!=value){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    while(q!=prev){
        
    }
    q->next=NULL;
    free(q);
    return head;
}
    int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data=20;
    head->next=first;
    head->prev=NULL;

    first->data=21;
    first->next=second;
    first->prev=head;

    second->data=22;
    second->next=third;
    second->prev=first;

    third->data=23;
    third->next=NULL;
    third->prev=second;

    // head=insertion_beg(head,100);
    // display(head);
    // printf("*****************************\n");
    // head=insert_rear(head,1000);
    // display(head);
    // printf("*****************************\n");
    // head= insert_whith_index(head,2,200);
    // display(head);

    // head=delete_rear (head);
    // display(head);
    
    // head=delete_index(head,1);
    // display(head);

    head=delete_value(head,2);
    display(head);
    
    return 0;
}