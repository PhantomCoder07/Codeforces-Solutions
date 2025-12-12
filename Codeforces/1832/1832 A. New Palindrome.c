#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[55];
        scanf("%s",s);
        int c=0;
        int n=strlen(s);
        for (int i=0; i<n/2; i++)
        {
            if (s[i]!=s[0])
                c++;
        }
        if (c==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
