#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s1[n+1],s2[n+1];
        scanf("%s %s",s1,s2);
        for (int i=0; i<n; i++)
        {
            if (s1[i]=='G')
                s1[i]='B';
            if (s2[i]=='G')
                s2[i]='B';
        }
        int c=strcmp(s1,s2);
        if (c==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
