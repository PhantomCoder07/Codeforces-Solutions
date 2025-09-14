#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,sum=0;
        scanf("%d",&n);
        int a[n],b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
        for (int i=0; i<n-1; i++)
        {
            if (a[i]>b[i+1])
                sum+=(a[i]-b[i+1]);
        }
        sum+=a[n-1];
        printf("%d\n",sum);
    }
    return 0;
}
