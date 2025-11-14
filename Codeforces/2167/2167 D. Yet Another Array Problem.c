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
        ll min=a[0];
        for (int i=0; i<n; i++)
        {
            if (a[i]<min)
                min=a[i];
        }
        for (int i=2; ; i++)
        {
            if (min%i==0 || min%2==i%2)
                continue;
            else
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
