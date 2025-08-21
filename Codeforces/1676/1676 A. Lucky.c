#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        char s[7];
        scanf("%s",s);
        if (s[0]+s[1]+s[2]==s[3]+s[4]+s[5])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
