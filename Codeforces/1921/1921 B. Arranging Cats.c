#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[n+1],f[n+1];
        scanf("%s %s",s,f);
        int c1=0,c0=0,ans=0;
        for (int i=0; i<n; i++)
        {
            if (f[i]!=s[i])
            {
                ans++;
                if (s[i]=='1')
                    c1++;
                else
                    c0++;
            }
        }
        if (c1>c0)
            printf("%d\n",ans-c0);
        else
            printf("%d\n",ans-c1);

    }
    return 0;
}
