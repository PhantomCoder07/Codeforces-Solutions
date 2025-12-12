#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m=0;
        scanf("%d",&n);
        char a[n+1],b[n+1],c[n+1];
        scanf("%s %s %s",a,b,c);
        for (int i=0; i<n; i++)
        {
            if (a[i]!=c[i] && b[i]!=c[i])
            {
                m=1;
                break;
            }
        }
        if (m==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
