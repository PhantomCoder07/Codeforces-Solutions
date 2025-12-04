#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        ll ans=a+b+c;
        if (ans%2==0)
            printf("%lld\n",ans/2);
        else
            printf("%lld\n",(ans-1)/2);
    }
    return 0;
}
