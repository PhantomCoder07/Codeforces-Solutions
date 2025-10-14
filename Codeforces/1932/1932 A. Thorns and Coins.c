#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0,th=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i]=='@')
            {
                c++;
                th=0;
            }
            else if (s[i]=='*')
            {
                th++;
                if (th>1)
                    break;
            }
            else
                th=0;
        }
        printf("%d\n",c);
    }
    return 0;
}
