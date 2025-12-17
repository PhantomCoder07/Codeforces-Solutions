#include <stdio.h>
int max (int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[101]={};
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        int ans=0;
        for (int i=1; i<=n; i++)
        {
            ans=max(ans,b[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
