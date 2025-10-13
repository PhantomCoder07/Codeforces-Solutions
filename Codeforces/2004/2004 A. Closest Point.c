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
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        if (n==2 && a[1]-a[0]>1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
