#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[55];
        int a[26]={};
        int b=0,c=0;
        scanf("%s",s);
        int n=strlen(s);
        for (int i=0; i<n; i++)
        {
            a[s[i]-'a']++;
        }
        for (int i=0; i<26; i++)
        {
            if (a[i]>1)
                b++;
            else if (a[i]==1)
                c++;
        }
        printf("%d\n",b+(c/2));
    }
    return 0;
}
