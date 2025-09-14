#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,x,y;
        scanf("%d %d %d %d",&n,&m,&x,&y);
        int a[n],b[m];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<m; i++)
        {
            scanf("%d",&b[i]);
        }
        printf("%d\n",n+m);
    }
    return 0;
}
