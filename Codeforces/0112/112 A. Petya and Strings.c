#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int l1=strlen(s1);
    int l2=strlen(s2);
    for (int i=0; i<l1; i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    int n=strcmp(s1,s2);
    printf("%d",n);
    return 0;
}
