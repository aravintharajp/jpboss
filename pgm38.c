#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   swap(&a,&b);
   printf("%d %d",a,b);
}
void swap(int *x,int *y)
{
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}
