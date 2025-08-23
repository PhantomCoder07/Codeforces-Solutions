#include <stdio.h>
#include <string.h>
int main()
{
    char s[51],t[51];
    scanf("%s",s);
    scanf("%s",t);
    int l1=strlen(s);
    int l2=strlen(t);
    int i=0,j=0;
    while (1)
    {
        if (s[i]==t[j++])
            i++;
        if (j==l2)
            break;
    }
    printf("%d",i+1);
    return 0;
}
