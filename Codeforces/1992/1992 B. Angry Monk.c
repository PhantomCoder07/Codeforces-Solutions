#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[k];
        int ans=0,max=0;
        for (int i=0; i<k; i++)
        {
            scanf("%d",&a[i]);
            if (max<a[i])
                max=a[i];
            ans+=(2*a[i]-1);
        }
        ans-=(2*max-1);
        printf("%d\n",ans);
    }
    return 0;
}
