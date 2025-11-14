#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n,k;
        scanf("%lld %lld",&n,&k);
        ll ans=(k*(2*n-k+1))/2;
        if (ans%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
