#include <stdio.h>
#define ll long long int
ll tree (ll n)
{
    if (n==1)
        return 1;
    return n+tree(n/2);
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n;
        scanf("%lld",&n);
        printf("%lld\n",tree(n));
    }
    return 0;
}
