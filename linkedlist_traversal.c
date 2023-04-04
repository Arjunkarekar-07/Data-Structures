#include<stdio.h>
#include<stdlib.h>
struct node{
            int data;
            struct node *next;
            
};
   
    struct node *head = (struct node *)malloc(struct new);
void traversal(struct node *p)
{
    while(p!=NULL)
    {           
        printf("element: %d\n",p->data);
        p=p->next;
    }
}
 int main(){
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next=second;
    
    second->data = 90;
    second->next=third;
    
    third->data=98;
    third->next = NULL;
    traversal(head);
        
    return 0;
}
