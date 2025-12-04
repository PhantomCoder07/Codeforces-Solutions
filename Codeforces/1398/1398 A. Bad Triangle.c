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
        for (int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        if (a[0]+a[1]<=a[n-1])
        {
            printf("1 2 %d\n",n);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
