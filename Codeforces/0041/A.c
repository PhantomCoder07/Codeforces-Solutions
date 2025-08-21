#include <stdio.h>
#include <string.h>
int main()
{
    char s[101],t[101];
    scanf("%s %s",s,t);
    int c=strcmp(s,strrev(t));
    if (c==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
