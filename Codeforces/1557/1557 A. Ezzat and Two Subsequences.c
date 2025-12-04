#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        ll a[n];
        ll sum=0;
        for (int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        ll max=a[0];
        for (int i=0; i<n; i++)
        {
            if (a[i]>max)
                max=a[i];
        }
        double ans=1.0*(sum-max)/(n-1)+max;
        printf("%.9f\n",ans);
    }
    return 0;
}
