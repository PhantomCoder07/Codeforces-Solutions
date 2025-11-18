#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,ans=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (j!=i)
                    ans^=a[j];
            }
            if (ans==a[i])
                break;
        }
        printf("%d\n",ans);
    }
    return 0;
}
