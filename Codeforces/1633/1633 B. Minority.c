#include <stdio.h>
#include <string.h>
int min (int a, int b)
{
    if (a>b)
        return b;
    else
        return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[200005];
        scanf("%s",s);
        int n=strlen(s);
        int c0=0,c1=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='0')
                c0++;
            if (s[i]=='1')
                c1++;
        }
        if (c0==c1)
            printf("%d\n",c0-1);
        else
            printf("%d\n",min(c0,c1));
    }
    return 0;
}
