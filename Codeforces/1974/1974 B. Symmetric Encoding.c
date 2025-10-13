#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m=0;
        scanf("%d",&n);
        char s[n],a[n];
        scanf("%s",s+1);
        int b[26],c[26];
        for (int i=0; i<26; i++)
        {
            b[i]=0;
        }
        for (int i=1; i<=n; i++)
        {
            b[s[i]-'a']=1;
        }
        for (int i=0; i<26; i++)
        {
            if (b[i]==1)
            {
                c[i]=++m;
                a[m]=i+'a';
            }
        }
        for (int i=1; i<=n; i++)
        {
            printf("%c",a[m-c[s[i]-'a']+1]);
        }
        printf("\n");
    }
    return 0;
}
