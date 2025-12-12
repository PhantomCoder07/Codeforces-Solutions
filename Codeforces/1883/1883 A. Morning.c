#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,i=0;
        scanf("%d",&n);
        int a,b,c,d;
        a=(n/1000);
        b=(n%1000)/100;
        c=(n%100)/10;
        d=(n%10);
        if (a==0)
            a=10;
        if (b==0)
            b=10;
        if (c==0)
            c=10;
        if (d==0)
            d=10;
        int ans=((a-1)+abs(b-a)+abs(c-b)+abs(d-c)+4);
        printf("%d\n",ans);
    }
    return 0;
}
