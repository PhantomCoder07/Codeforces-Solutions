#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[200005];
        int c[200005]={0};
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int valid=1;
        for (int i=0; i<n; i++)
        {
            int seat=a[i];
            if (i==0)
                c[seat]=1;
            else
            {
                if (c[seat-1]==1 || c[seat+1]==1)
                    c[seat]=1;
                else
                {
                    valid=0;
                    break;
                }
            }
        }
        if (valid)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
