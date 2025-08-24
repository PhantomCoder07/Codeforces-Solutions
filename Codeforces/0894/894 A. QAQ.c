#include <stdio.h>
#include <string.h>
int main()
{
    char s[105];
    scanf("%s",s);
    int n=strlen(s);
    int q=0,qa=0,qaq=0;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='Q')
        {
            q++;
            qaq+=qa;
        }
        else if (s[i]=='A')
            qa+=q;
    }
    printf("%d\n",qaq);
    return 0;
}
