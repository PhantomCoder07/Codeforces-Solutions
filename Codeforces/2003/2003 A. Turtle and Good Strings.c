#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        if (s[0]==s[n-1])
            printf("NO\n");
        else
            printf("Yes\n");
    }
    return 0;
}
