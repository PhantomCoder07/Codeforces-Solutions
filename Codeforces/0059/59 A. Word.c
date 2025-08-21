#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s),low=0,up=0;
    for (int i=0; i<l; i++)
    {
        if (isupper(s[i]))
            up++;
        if (islower(s[i]))
            low++;
    }
    if (up==low)
    {
        for (int i=0; i<l; i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else if (up<low)
    {
        for (int i=0; i<l; i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else if (up>low)
    {
        for (int i=0; i<l; i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    printf("%s",s);
    return 0;
}
