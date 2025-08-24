#include <stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    for (int i=0; i<n; i++)
    {
        if (s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            c++;
    }
    printf("%d",c);
    return 0;
}
