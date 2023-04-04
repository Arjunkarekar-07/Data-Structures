#include<stdio.h>
int linearsearch(int a[],int n,int key);
int binarysearch(int a[],int low,int high,int key);

    int main(){
    int a[10]={1,2,4,5,6,8,9,10};
    int key;
    int n=sizeof(a)/sizeof(int);
    printf("Enter the key element\n");
    scanf("%d",&key);
    int liresult=linearsearch(a,n,key);
    printf("element found at %d position\n",liresult); 
    int biresult=binarysearch(a,0,n-1,key);
    printf("element found at %d position\n",biresult); 
    return 0;
}
int linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i] == key)
         return i;
        else
         return -1;      
    }
}
int binarysearch(int a[],int low,int high,int key)
{
    while(low<=high)
    {
       int mid=(low+high)/2;
        if(a[mid]==key)
         return mid;
        if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}