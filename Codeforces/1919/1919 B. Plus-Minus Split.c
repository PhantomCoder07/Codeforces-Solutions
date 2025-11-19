#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,p=0,m=0;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i]=='+')
                p++;
            if (s[i]=='-')
                m++;
        }
        printf("%d\n",abs(p-m));
    }
    return 0;
}
