#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    int c=0;
    for (int i=1; i<n; i++)
    {
        if (s[i]==s[i-1])
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
