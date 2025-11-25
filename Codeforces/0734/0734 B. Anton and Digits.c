#include <stdio.h>
int min (int a, int b)
{
    if (a>b)
        return b;
    else
        return a;
}
int main()
{
    int k2,k3,k5,k6,a,b=0;
    scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
    a=min(k2,min(k5,k6));
    k2=k2-a;
    if (k2>0)
        b=min(k2,k3);
    printf("%ld\n",256*a+32*b);
    return 0;
}
