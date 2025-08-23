#include <stdio.h>
int comp (int a, int b)
{
    if (a>b)
        return a;
    else if (b>a)
        return b;
    else
        return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m=0;
        scanf("%d",&n);
        int a[n],b[n];
        int mina=1000000001,minb=1000000001;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]<mina)
                mina=a[i];
        }
        for (int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
            if (b[i]<minb)
                minb=b[i];
        }
        long long int c=0;
        for (int i=0; i<n; i++)
        {
            m=comp(a[i]-mina,b[i]-minb);
            c+=m;
        }
        printf("%lld\n",c);
    }
    return 0;
}
