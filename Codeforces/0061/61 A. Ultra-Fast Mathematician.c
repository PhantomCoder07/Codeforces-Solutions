#include <stdio.h>
#include <string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int l=strlen(a);
    for (int i=0; i<l; i++)
    {
        if (a[i]!=b[i])
            printf("1");
        else
            printf("0");
    }
    return 0;
}
