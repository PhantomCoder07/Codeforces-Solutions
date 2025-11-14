#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char c[]="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    while (t--)
    {
        char s[55];
        scanf("%s",s);
        char *ans=strstr(c,s);
        if (ans!=NULL)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
