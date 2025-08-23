#include <stdio.h>
#include <math.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n,sum=0;
        scanf("%lld",&n);
        ll a[n];
        for (ll i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        ll ans=sqrt(sum);
        if (ans*ans==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
