#include <stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d %d",&n,&m);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            char s[10];
            scanf("%s",&s);
            if (s[0]=='C' || s[0]=='M' || s[0]=='Y')
                c=1;
        }
    }
    if (c==1)
        printf("#Color");
    else
        printf("#Black&White");
    return 0;
}
