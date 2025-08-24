#include <stdio.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0,a=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        char meow[5]="meow";
        for (int i=0; i<n; i++)
        {
            s[i]=tolower(s[i]);
        }
        int m,e,o,w;
        m=e=o=w=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='m')
                m++;
            else
                break;
        }
        for(int i=m; i<n; i++)
        {
            if(s[i]=='e')
                e++;
            else
                break;
        }
        for(int i=m+e; i<n; i++)
        {
            if(s[i]=='o')
                o++;
            else
                break;
        }
        for(int i=m+e+o; i<n; i++)
        {
            if(s[i]=='w')
                w++;
            else
                break;
        }
        if(m+e+o+w==n && m>0 && e>0 && o>0 && w>0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
