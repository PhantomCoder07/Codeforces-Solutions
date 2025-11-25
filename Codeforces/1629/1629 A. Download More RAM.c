#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (a[j]<=k && a[j]!=-1)
                {
                    k+=b[j];
                    a[j]=-1;
                }
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
