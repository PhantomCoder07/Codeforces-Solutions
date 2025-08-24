#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n,a,b,c;
        scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
        long long int ans=(n/(a+b+c));
        n%=(a+b+c);
        ans*=3;
        if (n==0)
            printf("%d\n",ans);
        else if (n-a<=0)
            printf("%d\n",ans+1);
        else if (n-a-b<=0)
            printf("%d\n",ans+2);
        else
            printf("%d\n",ans+3);
    }
    return 0;
}
