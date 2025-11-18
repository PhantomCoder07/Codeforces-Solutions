#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n,m,x,a,b;
        scanf("%lld %lld %lld",&n,&m,&x);
        a=(x-1)%n;
        b=(x-1)/n;
        printf("%lld\n",a*m+b+1);
    }
    return 0;
}
