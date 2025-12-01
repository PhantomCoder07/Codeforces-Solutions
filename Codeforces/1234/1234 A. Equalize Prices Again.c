#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a,sum=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        int ans=(sum+n-1)/n;
        printf("%d\n",ans);
    }
    return 0;
}
