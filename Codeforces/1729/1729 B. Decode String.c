#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,j=0;
        scanf("%d",&n);
        char s[n],t[55];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i+2]=='0' && s[i+3]!='0')
            {
                t[j++]='a'+(10*(s[i]-'0')+s[i+1]-'0')-1;
                i+=2;
            }
            else
                t[j++]='a'+(s[i]-'0')-1;
        }
        t[j]='\0';
        printf("%s\n",t);
    }
    return 0;
}
