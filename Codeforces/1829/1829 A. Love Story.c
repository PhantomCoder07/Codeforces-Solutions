#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[11];
        scanf("%s",s);
        int c=0;
        char a[10]="codeforces";
        for (int i=0; i<10; i++)
        {
            if (s[i]!=a[i])
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
