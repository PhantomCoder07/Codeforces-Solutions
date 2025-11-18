#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for (int i=0; i<n; i++)
    {
        if (s[i]=='n')
            printf("1 ");
    }
    for (int i=0; i<n; i++)
    {
        if (s[i]=='z')
            printf("0 ");
    }
    return 0;
}
