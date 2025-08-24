#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[27],s[51];
        scanf("%s %s",a,s);
        int l=strlen(s);
        int sum=0,c[l],k=0;
        for (int i=0; i<l; i++)
        {
            for (int j=0; j<26; j++)
            {
                if (s[i]==a[j])
                    c[k++]=j+1;
            }
        }
        for (int i=1; i<l; i++)
        {
            sum+=abs(c[i]-c[i-1]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
