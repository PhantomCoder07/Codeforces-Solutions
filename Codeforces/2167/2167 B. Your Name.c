#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,f=0;
        scanf("%d",&n);
        char s[n+1],t[n+1];
        scanf("%s %s",s,t);
        int sc[27]={},tc[27]={};
        for (int i=0; i<n; i++)
        {
            sc[s[i]-'a']++;
            tc[t[i]-'a']++;
        }
        for (int i=0; i<27; i++)
        {
            if (sc[i]!=tc[i])
            {
                f=1;
                break;
            }
        }
        if (f==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
