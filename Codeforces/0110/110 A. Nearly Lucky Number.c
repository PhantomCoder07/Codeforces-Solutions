#include <stdio.h>
#include <string.h>
int main()
{
    char n[100];
    scanf("%s",n);
    int c=0;
    for (int i=0; i<strlen(n); i++)
    {
        if (n[i]=='4' || n[i]=='7')
            c++;
    }
    if (c==4 || c==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
