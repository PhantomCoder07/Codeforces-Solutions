#include <stdio.h>
int max (int a, int b)
{
    return (a>b)? a : b;
}
int calc (int a1, int a2, int a3, int a4, int a5)
{
    int c=0;
    if (a3==a1+a2)
        c++;
    if (a4==a2+a3)
        c++;
    if (a5==a3+a4)
        c++;
    return c;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a1,a2,a3=0,a4,a5;
        scanf("%d %d %d %d",&a1,&a2,&a4,&a5);
        int try1=a1+a2;
        int try2=a4-a2;
        int try3=a5-a4;
        a3=max(a3,calc(a1,a2,try1,a4,a5));
        a3=max(a3,calc(a1,a2,try2,a4,a5));
        a3=max(a3,calc(a1,a2,try3,a4,a5));
        printf("%d\n",a3);
    }
    return 0;
}
