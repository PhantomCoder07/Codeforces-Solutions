#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        char s[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%s",s);
        int c=0;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i]==a[j] && s[i]!=s[j])
                {
                    c=1;
                    break;
                }
            }
        }
        if (c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
