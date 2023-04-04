// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };

// void display(struct node *head)
// {
//     while(head!=NULL)
//     {
//         printf("elements : %d\n",head->data);
//         head=head->next;
//     }
// }

// // struct node * inser_back(struct node *head,int data)
// // {
// //     struct node *ptr = (struct node *)malloc(sizeof(struct node));
// //     ptr->data=data;
// //     struct node *p=head;
// //     while(p->next!=NULL)
// //     {
// //         p=p->next;
// //     }
// //     p->next=ptr;
// //     ptr->next=NULL;
// //     return head;
// // }

// // struct node * insert_front(struct node *head,int data)
// // {
// //     struct node *ptr = (struct node *)malloc(sizeof(struct node));
// //     ptr->data=data;
// //     ptr->next=head;
// //     return ptr;   
// // }
// // struct node * insert_after_a_node(struct node *head,struct node *prev,int data)
// // {
// //     struct node *ptr = (struct node *)malloc(sizeof(struct node));
// //     ptr->data=data;
// //     ptr->next=prev->next;
// //     prev->next=ptr;   
// //     return head;   
// // }
// // struct node * insert_with_index(struct node *head,int index,int data)
// // {
// //     struct node *ptr = (struct node *)malloc(sizeof(struct node));
// //     ptr->data=data;
// //     struct node *p=head;
// //     for(int i=0;i<index-1;i++)
// //     {
// //         p=p->next;
// //     }
// //     ptr->next=p->next;
// //     p->next=ptr;
// //     return head;   
// // }
// struct node * delete_front(struct node *head)
//    {    
//       struct node *p=head;
//       head=head->next;
//       free(p);
//       return head;
//    }
//    struct node * delete_rear(struct node *head)
//    {    
//       struct node *p=head;
//       struct node *q=head->next;
//       while(q->next!=NULL){
//         p=p->next;
//         q=q->next;
//       }
//       p->next=NULL;
//       free(q);
//       return head;
//    }

//    struct node *delete_with_index(struct node *head,int index)
//    {    
//       struct node *p=head;
//       struct node *q=head->next;
//       for(int i=0;i<index-1;i++)
//       {
//          p=p->next;
//          q=q->next;

//       }
//       p->next=q->next;
//       free(q);
//       return head;
//    }
//   struct node *delete_after_node(struct node *head,int index,struct node *node)
//    {    
//       struct node *p=head;
//       struct node *q=head->next;
     
//       return head;
//    }

//    struct node  *delete_with_value(struct node *head,int value){

//      struct node *p=head;
//      struct node *q=head->next;
//      while(q->data!=value && q->next!=NULL)
//     {
//         p=p->next;
//         q=q->next;
//     }
//     if(q->data==value){
//         p->next=q->next;

//     }
//     free(q);
//     return head;
// }


// int main(){

//     struct node *head = (struct node *)malloc(sizeof(struct node));
//     struct node *first = (struct node *)malloc(sizeof(struct node));
//     struct node *second = (struct node *)malloc(sizeof(struct node));
//     struct node *third = (struct node *)malloc(sizeof(struct node));

//     head->data=10;
//     head->next=second;

//     second->data=20;
//     second->next=third;

//     third->data=30;
//     third->next=NULL;

//     // head=insert_front(head,20);
//     // display(head);

//     // head=inser_back(head,100);
//     // display(head);

//     // head=insert_with_index(head,1,100);
//     // display(head);

//     // head=insert_after_a_node(head,second,20);
//     // display(head);

//     // head=delete_front(head);
//     // display(head);

//     // head=delete_rear(head);
//     // display(head);

//     head=delete_with_value(head,20);
//     display(head);

//     return 0 ;
// }


// #include<iostream>
// using namespace std;
// void display(int a[],int n){
//     for(int i=0;i<n;i++) 
//     {
//         cout<<a[i]<<"\n";
//     }
// }
// int insertion(int a[],int n,int index,int e)
// {
//     for(int i=n;i>=index;i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[index]=e;
//     return 1;
// }

// int main(){
//     int a[100],n=5,ele,index;
//     cout<<"Enter the array elements"<<endl;
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     cout<<"Enter the element and the index position";
//     cin>>ele>>index;
//     insertion(a,n,index,ele);
//     n++;
//     display(a,n);
//     return 0;
// }

// rhirehrihe /*odfjoudohfu*/ ioejfqoijfoq
#include<iostream>
using namespace std;
int main()
{

    int me=1;
    flat you=1.1;
    if(me==you)
        cout<<"hi";
    else 
        cout<<"bye";

}