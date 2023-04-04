#include<stdio.h>
int deletion(int a[],int n,int index,int e );

    int main(){
    int index=2,n=5,e=9,a[100]={2,4,5,5,6};
    deletion(a,n,index,e);
    return 0;
}
int deletion(int a[],int n,int index,int e)
{
    for(int i=index;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0 ;
}