#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,k,c=0;
        scanf("%d %d %d",&n,&m,&k);
        int a[n],b[m];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<m; i++)
        {
            scanf("%d",&b[i]);
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (a[i]+b[j]<=k)
                    c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
