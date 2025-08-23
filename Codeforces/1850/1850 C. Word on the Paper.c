#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int k=0;
        char s[9][9];
        for (int i=0; i<8; i++)
        {
            scanf("%s",s[i]);
        }
        for (int i=0; i<8; i++)
        {
            for (int j=0; j<8; j++)
            {
                if (s[i][j]>='a' && s[i][j]<='z')
                {
                    printf("%c",s[i][j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
