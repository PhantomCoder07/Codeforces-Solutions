#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m=1;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (s[i]==s[j])
                {
                    if ((j-i)%2)
                        m=0;
                }
            }
        }
        if (m)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
