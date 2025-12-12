#include <stdio.h>
#include <string.h>
int max (int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    int q;
    scanf("%d",&q);
    while (q--)
    {
        char s[105],t[105];
        scanf("%s %s",s,t);
        int n=strlen(s);
        int m=strlen(t);
        int c=0,d=max(n,m);
        for (int i=0; i<d; i++)
        {
            if (s[i]==t[i] && (s[i]!='\0' || t[i]!='\0'))
                c++;
            else
                break;
        }
        if (c==0)
            printf("%d\n",n+m);
        else
            printf("%d\n",n+m+1-c);
    }
    return 0;
}
