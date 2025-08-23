#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,min=100000000,sum=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]<min)
                min=a[i];
        }
        for (int i=0; i<n; i++)
        {
            sum+=(a[i]-min);
        }
        printf("%d\n",sum);
    }
    return 0;
}
