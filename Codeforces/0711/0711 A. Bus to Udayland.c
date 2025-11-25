#include <stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    char s[n*6];
    for (i=0; i<n*6; i++)
    {
        scanf("%c",&s[i]);
    }
    s[i]='\0';
    for (i=0; i<n*6-1; i++)
    {
        if (s[i]=='O' && s[i+1]=='O')
        {
            c=1;
            s[i]='+';
            s[i+1]='+';
            break;
        }
    }
    if (c==1)
        printf("YES%s",s);
    else
        printf("NO\n");
    return 0;
}
