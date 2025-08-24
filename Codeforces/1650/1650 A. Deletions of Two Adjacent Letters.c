#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[50],c[2];
        scanf("%s %s",s,c);
        int l=strlen(s);
        int ans=0;
        for (int i=2; i<l; i+=2)
        {
            if (s[i]==c[0])
            {
                ans=1;
                break;
            }
        }
        if (ans==1 || s[0]==c[0])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
