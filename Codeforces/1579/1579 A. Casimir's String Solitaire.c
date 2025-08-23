#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[51];
        scanf("%s",s);
        int a=0,b=0,c=0;
        int l=strlen(s);
        for (int i=0; i<l; i++)
        {
            if (s[i]=='A')
                a++;
            if (s[i]=='B')
                b++;
            if (s[i]=='C')
                c++;
        }
        if (a+c==b || (a==b && c==0) || (c==b &&a==0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
