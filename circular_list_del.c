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
struct node * delete_front(struct node *head)
{
    struct node *p=head;
    struct node *q=head;
    while(q->next!=head){
        q=q->next; 
    }
    head=head->next;
    q->next=head;
    free(p);
    return head;
    
}
struct node *delete_rear(struct node *head)
{
    struct node *p=head;
    struct node *q=head;
    while(q->next!=head){
        q=q->next; 
    }
    while(p->next!=q){
        p=p->next;
    }
    p->next=head;
    q->next=NULL;
    free(q);
    return head;
    
}
struct node * delete_with_index(struct node *head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++)
    {
        q=q->next;
    }
    if(q->next!=head){
     for(int i=0;i<index-1;i++){
        p=p->next;
     }    
    p->next=q->next;
    free(q);    
    }
    if(q->next==head){
        head=head->next;
        q->next=head;
        free(p);
    }
    return head;
}
struct node *delete_with_value(struct node *head,int value){

    struct node *p=head;
    struct node *ptr=head;
    struct  node *q=head->next;
    
    while(p->data!=value){
        p=p->next;
        q=q->next;
    }
    if(q->next!=head){
    p->next=q->next;
    free(q);
 }
    if(q->next==head){
        ptr=p;
        ptr->next=head;
        q->next=NULL;
        free(q);     
 }
 return head;
}



    int main()
    {
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

        // head=delete_front(head);
        // display(head);

        // head=delete_rear(head);
        // display(head);

        // head=delete_with_index(head,2);
        // display(head);

        // head=delete_with_value(head,100);
        display(head);

    
    return 0;
}