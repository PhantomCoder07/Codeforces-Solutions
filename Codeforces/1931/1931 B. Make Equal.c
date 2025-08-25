#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n,sum=0;
        scanf("%lld",&n);
        ll a[n],c=1;
        for (ll i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        ll equal=sum/n;
        sum=0;
        if (n==1)
            printf("YES\n");
        else
        {
            for (int i=0; i<n; i++)
            {
                sum+=a[i];
                if (sum<(i+1)*equal)
                {
                    c=0;
                    break;
                }
            }
            if (c)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
