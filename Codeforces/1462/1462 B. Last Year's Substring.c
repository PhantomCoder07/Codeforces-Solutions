#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char ch[]="2020";
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int c1=0,c2=3;
        while (s[c1]==ch[c1])
        {
            c1++;
        }
        while (s[n-1]==ch[c2])
        {
            n--;
            c2--;
        }
        if (c1>c2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
