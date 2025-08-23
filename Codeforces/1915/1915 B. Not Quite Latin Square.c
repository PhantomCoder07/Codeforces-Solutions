#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[4][4];
        for (int i=0; i<3; i++)
        {
            scanf("%s",s[i]);
        }
        int a=0,b=0,c=0;
        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                if (s[i][j]=='A')
                    a++;
                if (s[i][j]=='B')
                    b++;
                if (s[i][j]=='C')
                    c++;
            }
        }
        if (a<3)
            printf("A\n");
        if (b<3)
            printf("B\n");
        if (c<3)
            printf("C\n");
    }
    return 0;
}
