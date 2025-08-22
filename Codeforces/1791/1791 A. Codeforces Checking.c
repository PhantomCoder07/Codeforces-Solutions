#include <stdio.h>
int main()
{
    int t;
    char alpha[12]="codeforces";
    scanf("%d",&t);
    while (t--)
    {
        int c=0;
        char s[2];
        scanf("%s",&s);
        for (int i=0; i<10; i++)
        {
            if (s[0]==alpha[i])
            {
                c=1;
                break;
            }
            else
                continue;
        }
        if (c==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
