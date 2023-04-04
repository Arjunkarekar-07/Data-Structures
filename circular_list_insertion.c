#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void display(struct node *head){
    struct node *p=head;
    do{      
        printf("elements :%d\n",p->data);
        p=p->next;
    }while(p!=head);

}
struct node *insert_front(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head->next;
     while(p->next!=head){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=head;
    head=ptr;

    return head;
}
struct node *insert_end(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head->next;
     while(p->next!=head){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=head;
    return head;
}
struct node *insert_whith_index(struct node *head,int data,int index){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;
     for(int i=0;i<index-1;i++)
     {
        p=p->next;
     }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node *insert_after_a_node(struct node *head,int value,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=data;
    while(p->data!=value){
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}






    int main(){
        struct node *head=(struct node*)malloc(sizeof(struct node));
        struct node *second=(struct node*)malloc(sizeof(struct node));

        struct node *first=(struct node*)malloc(sizeof(struct node));

        struct node *third=(struct node*)malloc(sizeof(struct node));

        head->data=10;
        head->next=second;

        second->data=20;
        second->next=third;

        third->data=30;
        third->next=head;

        head=insert_front(head,100);
        head=insert_front(head,1000);
        head=insert_end(head,200);
        head=insert_whith_index(head,40,1);
        head=insert_after_a_node(head,40,1000);
        display(head);

    
    return 0;
}