#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,ans=0;
        scanf("%d %d",&n,&m);
        char s[n+1];
        scanf("%s",s);
        int c[7]={0};
        for (int i=0; i<n; i++)
        {
            c[s[i]-'A']++;
        }
        for (int i=0; i<7; i++)
        {
            if (m-c[i]>0)
                ans+=(m-c[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
