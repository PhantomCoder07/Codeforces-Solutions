#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[105];
        scanf("%s",s);
        int l=strlen(s);
        int ans=0;
        for (int i=1; i<l; i++)
        {
            if (s[i-1]==s[i])
            {
                ans=1;
                break;
            }
        }
        if (ans==1)
            printf("1\n");
        else
            printf("%d\n",l);
    }
    return 0;
}
