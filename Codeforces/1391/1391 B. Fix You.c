#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        char s[n][m];
        for (int i=0; i<n; i++)
        {
            scanf("%s",s[i]);
        }
        int r=0,d=0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (s[i][j]=='R' && j==m-1)
                    r++;
                if (s[i][j]=='D' && i==n-1)
                    d++;
            }
        }
        printf("%d\n",r+d);
    }
    return 0;
}
