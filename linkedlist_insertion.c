#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};

void insertion_after_a_node(struct node *prev,int data){
   struct node *p=(struct node *)malloc(sizeof(struct node));
   p->data=data;
   p->next=prev->next;
   prev->next=p;


}
void traversal(struct node *p)
{
    while(p!=NULL)
    {           
        printf("element: %d\n",p->data);
        p=p->next;
    }
}
void insertion_beg(struct node *p,struct node *f,struct node *insert){  
       
        f->next = p;
        p->next = insert;
}
void insertion_end (struct node *p,struct node *l,struct node *last)
{
    while(p!=NULL){
        p=p->next;
        if(p==NULL){
            last->next=l;
            l->next=NULL;
        }

    }

}

    int main(){
        struct node *head;
        struct node *first;
        struct node *second;
        struct node *last;
        struct node *insert;
        struct node *f;
        struct node *l;

        head = (struct node *)malloc(sizeof(struct node));
        first = (struct node *)malloc(sizeof(struct node));
        second = (struct node *)malloc(sizeof(struct node));
        insert = (struct node *)malloc(sizeof(struct node));
        last = (struct node *)malloc(sizeof(struct node));
        f = (struct node *)malloc(sizeof(struct node));
        l= (struct node *)malloc(sizeof(struct node));

        l->data=67;


        head->data = 10;
        head->next = first ;

        first->data=20;
        first->next = last;

        last->data=30;
        last->next=NULL;

        f->data=49;
        insertion_after_a_node(first,100);
        insertion_beg(head,f,insert);
        insertion_end(head,l,last);
        traversal(f);

    
    return 0;
}