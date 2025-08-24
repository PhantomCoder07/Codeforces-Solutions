#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,k,p;
        scanf("%d %d %d",&n,&k,&p);
        int a=0,c=0;
        if (k<0)
            k*=(-1);
        while (a<k)
        {
            a+=p;
            c++;
        }
        if (c<=n)
            printf("%d\n",c);
        else
            printf("-1\n");
    }
    return 0;
}
