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
        scanf("%s",s);
        for (int i=0; i<n-1; i++)
        {
            if (s[i]<=s[i+1])
                continue;
            else
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
