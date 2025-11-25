#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c0=0,c1=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i]=='0')
                c0++;
            if (s[i]=='1')
                c1++;
        }
        if (c0<=1 && c1<=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
