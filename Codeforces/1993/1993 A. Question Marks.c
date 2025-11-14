#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[4*n];
        scanf("%s",s);
        int a=0,b=0,c=0,d=0;
        for (int i=0; i<4*n; i++)
        {
            if (s[i]=='A' && a<n)
                a++;
            if (s[i]=='B' && b<n)
                b++;
            if (s[i]=='C' && c<n)
                c++;
            if (s[i]=='D' && d<n)
                d++;
        }
        printf("%d\n",a+b+c+d);
    }
    return 0;
}
