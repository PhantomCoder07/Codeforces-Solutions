#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k,ans=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        if (k==1)
        {
            for (int i=0; i<n-1; i++)
            {
                if (a[i]>a[i+1])
                {
                    ans=1;
                    break;
                }
            }
            if (ans==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
