#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,s,m;
        scanf("%d %d %d",&n,&s,&m);
        int l[n],r[n];
        int max=0,ans=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d %d",&l[i],&r[i]);
            max=l[i]-max;
            if (max>=s)
                ans=1;
            else
                max=r[i];
        }
        if ((m-max)>=s)
            ans=1;
        if (ans==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
