#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[11];
        scanf("%s",s);
        int l=strlen(s);
        s[l-2]='i';
        s[l-1]='\0';
        printf("%s\n",s);
    }
    return 0;
}
