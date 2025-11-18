#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll a,b,k;
        scanf("%lld %lld %lld",&a,&b,&k);
        printf("%lld\n",k/2*(a-b)+k%2*a);
    }
    return 0;
}
