#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int even=0,odd=0,sum=0;
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]%2==0)
                even++;
            else
                odd++;
            sum+=a[i];
        }
        if (sum%2==1)
            printf("YES\n");
        else
        {
            if (odd!=0 && even!=0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
