#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n,c=0,ans;
        scanf("%lld",&n);
        for (int i=1; i<=9; i++)
        {
            ans=i;
            while (ans<=n)
            {
                c++;
                ans=ans*10+i;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
