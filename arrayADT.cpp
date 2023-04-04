#include<stdio.h>
#include<stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *p;
};
void createarray(struct myarray *a,int ts,int us){
    // (*a).total_size=ts;
    // (*a).used_size=ts;
    // (*a).p=(int *)malloc(tsize *(sizeof(int));
    //both are same;;

    a->total_size=ts;
    a->used_size=us;
    a->p=(int *)malloc(ts *(sizeof(int)));
}
void show(struct myarray *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        printf("%d\n",(a->p)[i]);
    }
}

void set(struct myarray *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        int n;
        printf("Enter the %d element",i);
        scanf("%d",&n);
        (a->p)[i]=n;
    }
}

int main()
{
    struct myarray marks;
    createarray(&marks,10,2);
    set(&marks);
    show(&marks);
}
