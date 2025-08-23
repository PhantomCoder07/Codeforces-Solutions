#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,x=0,y=0,c=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i]=='U')
                y++;
            if (s[i]=='D')
                y--;
            if (s[i]=='R')
                x++;
            if (s[i]=='L')
                x--;
            if (y==1 && x==1)
            {
                c=1;
                break;
            }
        }
        if (c==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
