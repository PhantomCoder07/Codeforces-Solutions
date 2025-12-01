#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,ans=0;
        scanf("%d",&n);
        char s[1005];
        int c[27]={};
        for (int i=0; i<n; i++)
        {
            scanf("%s",s);
            int l=strlen(s);
            for (int j=0; j<l; j++)
            {
                c[s[j]-'a']++;
            }
        }
        for (int i=0; i<26; i++)
        {
            if (c[i]%n!=0)
            {
                ans=1;
                break;
            }
        }
        if (ans==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
