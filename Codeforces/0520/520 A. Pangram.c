#include <stdio.h>
int main()
{
    int n,c[26]={0};
    scanf("%d",&n);
    char s[101];
    scanf("%s",s);
    for (int i=0; i<n; i++)
    {
        if (s[i]<97)
        {
            s[i]=s[i]+32;
            c[s[i]-'a']=1;
        }
        else
            c[s[i]-'a']=1;
    }
    for (int i=0; i<26; i++)
    {
        if (c[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
