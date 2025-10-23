#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,mul=1;
        scanf("%d",&n);
        int a[n];
        int c0=0,c1=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]!=0)
                mul*=a[i];
            if (a[i]==0)
                c0++;
            if (a[i]==-1)
                c1++;
        }
        if (mul>0)
            printf("%d\n",c0);
        else
            printf("%d\n",c0+2);
    }
    return 0;
}
