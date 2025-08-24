#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int max,min,m;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]==1)
                min=i+1;
            if (a[i]==n)
                max=i+1;
        }
        if (max<min)
        {
            m=min;
            min=max;
            max=m;
        }
        int c=max;
        if (c>n+1-min)
            c=n+1-min;
        if (c>min+n+1-max)
            c=min+n+1-max;
        printf("%d\n",c);
    }
    return 0;
}
