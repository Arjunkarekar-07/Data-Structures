#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n" );
}
int sortedInsertion(int a[],int n,int element,int cap,int in)
{
    if(n>cap)
    return -1;
    for(int i=n;i>=in;i--)
    {
        a[i+1]=a[i];
    }
    a[in]=element;
    return 1;

}

    int main(){
    int arr[100]={0,5,10,54};
    // ;capacity=100;
    int n=4;
    int element=34;
    int index=0;
    sortedInsertion(arr,n,element,100,index);
    n++;
    display(arr,n);
    return 0;
}