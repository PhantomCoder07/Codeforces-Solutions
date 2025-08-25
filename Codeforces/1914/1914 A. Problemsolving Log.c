#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        int c[26]= {0};
        int a=0,b=0;
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (c[s[i]-'A']==0)
            {
                for (int j=0; j<n; j++)
                {
                    if (s[i]==s[j])
                    {
                        a++;
                    }
                }
            }
            if (a>=s[i]-64)
                b++;
            c[s[i]-'A']++;
            a=0;
        }
        printf("%d\n",b);
    }
    return 0;
}
