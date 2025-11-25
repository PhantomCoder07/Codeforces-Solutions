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
        int a[26]={};
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            a[s[i]-'a']++;
        }
        for (int i=1; i<n-1; i++)
        {
            if (a[s[i]-'a']>=2)
            {
                c=1;
                break;
            }
        }
        if (c==1)
            printf("Yes\n");
        else
            printf("NO\n");
    }
    return 0;
}
