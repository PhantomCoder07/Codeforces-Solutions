#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k,c=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]==k)
                c=1;
        }
        if (c==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
