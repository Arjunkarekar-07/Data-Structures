#include<stdio.h>
#include<stdlib.h>
{
struct node{
    int data;
    struct node *next;

};
void display(struct node *p){
    while(p!=NULL)
    {
        printf("element : %d ",p->data);
        p=p->next;

    }

}
struct node *deletion_beg(struct node *head){
    struct node *p = head;
    head=head->next;
    printf("deleted element %d\n",p->data);
    free(p);
    return head;
}

struct node *deletion_end(struct node *head){
    struct node *p = head;
     struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }    
    p->next=NULL;
    free(q);
    return head;
    
}
struct node *index_del(struct node *head,int  index){
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<=index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;

}

struct node *del_value(struct node *head,int  value){
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value)
    p->next=q->next;
    free(q);
    return head;

}
    int main(){
        struct node *head = (struct node *)malloc (sizeof(struct node));
        struct node *first = (struct node *)malloc (sizeof(struct node));
        struct node *second = (struct node *)malloc (sizeof(struct node));
        struct node *third = (struct node *)malloc (sizeof(struct node));

        head->data=10;
        head->next=first;

        first->data=20;
        first->next=second;

        second->data=30;
        second->next=third;

        third->data=40;
        third->next=NULL;

        // head=deletion_beg(head);
        // display(head);

        // head=deletion_end(head);
        // display(head);

        // head = index_del(head,2);
        // display(head);

        head = del_value(head,40);
        display(head);
    
    return 0;
}