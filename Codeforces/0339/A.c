#include <stdio.h>
int main()
{
    char s[100];
    int c[4]={},f=1;
    scanf("%s",&s);
    for (int i=0; s[i]; i++)
    {
        c[s[i]-'0']++;
    }
    for (int i=1; i<=3; i++)
    {
        while (c[i]--)
        {
            if (!f)
                printf("+");
            printf("%d",i);
            f=0;
        }
    }
    return 0;
}
