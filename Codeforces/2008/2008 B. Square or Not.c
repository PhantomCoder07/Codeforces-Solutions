#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c1=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1')
                c1++;
        }
        int c=sqrt(n);
        if (c1==(4*(c-1)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
