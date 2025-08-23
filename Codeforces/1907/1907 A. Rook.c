#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[3];
        scanf("%s",s);
        for (char i='1',j='a'; i<='8',j<='h'; i++,j++)
        {
            if (s[1]!=i)
                printf("%c%c\n",s[0],i);
            if (s[0]!=j)
                printf("%c%c\n",j,s[1]);
        }
    }
    return 0;
}
