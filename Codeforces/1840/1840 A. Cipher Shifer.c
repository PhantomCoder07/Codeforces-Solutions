#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        while (c<n)
        {
            char ch=s[c];
            printf("%c",ch);
            c++;
            while (c<n && s[c]!=ch)
                c++;
            c++;
        }
        printf("\n");
    }
    return 0;
}
