#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll n,sum=0,c=1,k=0;
        scanf("%lld",&n);
        ll a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            if (a[i]<0)
                sum-=a[i];
            else
                sum+=a[i];
            if (a[i]>0)
                c=1;
            if (a[i]<0 && c==1)
            {
                c=0;
                k++;
            }
        }
        printf("%lld %lld\n",sum,k);
    }
    return 0;
}
