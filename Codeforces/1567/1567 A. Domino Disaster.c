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
        for (int i=0; i<n; i++)
        {
            if (s[i]=='U')
                printf("D");
            else if (s[i]=='L')
                printf("L");
            else if (s[i]=='R')
                printf("R");
            else
                printf("U");
        }
        printf("\n");
    }
    return 0;
}
