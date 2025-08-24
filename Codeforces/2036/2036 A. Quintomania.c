#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (i>0 && abs(a[i-1]-a[i])==5 || abs(a[i-1]-a[i])==7)
            {
                c++;
            }
        }
        if (c==n-1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
