#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[1000];
    scanf("%1000s",s);
    s[0]=toupper(s[0]);
    printf("%s\n",s);
    return 0;
}
