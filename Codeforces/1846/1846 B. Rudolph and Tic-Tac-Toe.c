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
            scanf("%s",&s[i]);
        }
        int c=0;
        for (int i=0; i<3; i++)
        {
            if (s[i][0]==s[i][1] && s[i][1]==s[i][2] && s[i][0]!='.')
            {
                printf("%c\n",s[i][0]);
                c=1;
                break;
            }
            else if (s[0][i]==s[1][i] && s[1][i]==s[2][i] && s[0][i]!='.')
            {
                printf("%c\n",s[0][i]);
                c=1;
                break;
            }
        }
        if (c==0)
        {
            if (s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[0][0]!='.')
            {
                printf("%c\n",s[0][0]);
            }
            else if (s[0][2]==s[1][1] && s[1][1]==s[2][0] && s[0][2]!='.')
            {
                printf("%c\n",s[0][2]);
            }
            else
                printf("DRAW\n");
        }
    }
    return 0;
}
