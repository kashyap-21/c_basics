#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=1;
    int y=2;
    printf("before:\n");
    printf("%d\n",x);
    printf("%d\n",y);
    swap(&x,&y);
     printf("after:\n");
    printf("%d\n",x);
    printf("%d\n",y);

}
void swap(int *a,int *b)
{
    int swp=0;
    swp=*a;
    *a=*b;
    *b=swp;
}
