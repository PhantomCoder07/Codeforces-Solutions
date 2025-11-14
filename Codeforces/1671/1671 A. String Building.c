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
        int n=strlen(s);
        int f=0;
        for (int i=0; i<n; )
        {
            char ch=s[i];
            int c=0;
            while (i<n && s[i]==ch)
            {
                c++;
                i++;
            }
            if (c==1)
            {
                f=1;
                break;
            }
        }
        if (f==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
