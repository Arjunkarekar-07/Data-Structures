#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1;
int s[max];

void push(){
    int ele;
    if(top==max-1){
        printf("OVERFLOW\n");
    }

    else 
    {
        printf("Enter the elements to be pushed\n");
        scanf("%d",&ele);
        top=top+1;
        s[top]=ele;
    }
}
void pop(){
    if(top == -1){
        printf("UNDERFLOW\n");
    }

    printf("popped element is %d\n",s[top]);
    top=top-1;
}

void show(){
    if(top == -1){
        printf("UNDERFLOW\n");
    }
    else
    printf("The stack elements are:\n");
    for(int i=0;i<=top;i++){
        printf("%d\n",s[i]);
    }
}
int main(){
    
    int n;
    while(1){
    printf("Enter your choice -> 1.push 2.pop 3.show 4.Exit\n");
    scanf("%d",&n);
    switch(n){
        case 1 : push();
                break;
        case 2 : pop();
                break;
        case 3:show();
                break;
        case 4:exit(0);
        
        default : printf("Invalid choice !!");
                  break;
    }
    }
   return 0;
}