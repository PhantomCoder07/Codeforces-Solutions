#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int p[n+1];
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&m);
        p[m]=i;
    }
    for (int i=1; i<=n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}
