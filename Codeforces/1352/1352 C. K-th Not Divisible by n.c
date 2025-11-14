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
        printf("%d\n",k+(k-1)/(n-1));
    }
    return 0;
}
