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
        ll max=a[0];
        for (int i=0; i<n; i++)
        {
            if (a[i]>max)
                max=a[i];
        }
        for (int i=0; i<n-1; i++)
        {
            if (a[i]<a[i+1])
                a[i]=a[i+1];
            if (a[i]<max)
                max=a[i];
        }
        printf("%d\n",max-1);
    }
    return 0;
}
