#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,j=0;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        scanf("%d",&m);
        char b[m],c[m];
        scanf("%s %s",b,c);
        char s[n+m];
        for (int i=m-1; i>=0; i--)
        {
            if (c[i]=='V')
                s[j++]=b[i];
        }
        for (int i=0; i<n; i++)
        {
            s[j++]=a[i];
        }
        for (int i=0; i<m; i++)
        {
            if (c[i]=='D')
                s[j++]=b[i];
        }
        s[j]='\0';
        printf("%s\n",s);
    }
    return 0;
}
