#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int *arr;
    int size;
};

int isempty(struct stack *ptr ){
    if(ptr->top==-1){
        return 1;
    }
    return 0;

}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}

    int main(){
        struct stack *s;
        s->top=-1;
        s->size=200;
        s->arr=(int *)malloc(s->size * sizeof(int));
        if(isempty(s))
        {
            printf("stack is empty");

        }
        else{
          printf("the stack is full"); 

        }
        return 0;
    

}