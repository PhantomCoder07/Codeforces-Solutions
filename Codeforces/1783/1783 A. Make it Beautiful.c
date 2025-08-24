#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (i>0 && a[i]==a[i-1])
                c++;
        }
        if (c==n-1)
            printf("NO\n");
        else
        {
            printf("YES\n");
            printf("%d ",a[n-1]);
            for (int i=0; i<n-1; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
