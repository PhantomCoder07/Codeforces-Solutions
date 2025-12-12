#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int max=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (max<a[i] && i!=n-1)
                max=a[i];
        }
        printf("%d\n",max+a[n-1]);
    }
    return 0;
}
