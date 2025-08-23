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
        int c=0,t=0,l=0,r=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]==2)
                t++;
        }
        for (int k=1; k<n; k++)
        {
            if (a[k-1]==2)
                l++;
            r=t-l;
            if (r==l)
            {
                printf("%d\n",k);
                c=1;
                break;
            }
        }
        if (c==0)
            printf("-1\n");
    }
    return 0;
}
