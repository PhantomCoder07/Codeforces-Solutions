#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[11];
        scanf("%s",s);
        int n=strlen(s);
        int c=0;
        for (int i=0; i<n-1; i++)
        {
            if (s[i]==s[i+1])
            {
                c=i+1;
                break;
            }
        }
        for (int i=n; i>c; i--)
        {
            s[i]=s[i-1];
        }
        if (s[c]!='z')
            s[c]++;
        else
            s[c]='a';
        s[n+1]='\0';
        printf("%s\n",s);
    }
    return 0;
}
