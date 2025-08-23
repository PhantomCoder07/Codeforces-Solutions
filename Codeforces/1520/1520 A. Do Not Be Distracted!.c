#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        char s[n];
        int a[26]={0};
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i]!=s[i+1])
                a[s[i]-'A']++;
        }
        for (int i=0; i<26; i++)
        {
            if (a[i]>1)
            {
                c=1;
                break;
            }
        }
        if (c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
