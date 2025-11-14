#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,j,k;
        scanf("%d %d %d",&n,&j,&k);
        int a[n],max=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]>max)
                max=a[i];
        }
        if (k==1)
        {
            if (max==a[j-1])
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
