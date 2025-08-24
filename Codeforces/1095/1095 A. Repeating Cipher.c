#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);
    int i=0,c=1;
    while (i<n)
    {
        printf("%c",s[i]);
        i+=c;
        c++;
    }
    return 0;
}
