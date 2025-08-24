#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],sum=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if (sum%3==0)
            printf("0\n");
        else if (sum%3==2)
            printf("1\n");
        else
        {
            int ans=2;
            for (int i=0; i<n; i++)
            {
                sum-=a[i];
                if (sum%3==0)
                {
                    ans=1;
                    break;
                }
                sum+=a[i];
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
