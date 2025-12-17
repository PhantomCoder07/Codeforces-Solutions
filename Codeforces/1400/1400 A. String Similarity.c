#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        char s[100];
        scanf("%d %s",&n,s);
        int l=2*n-1;
        int c1=0,c0=0;
        for (int i=0; i<l; i++)
        {
            if (s[i]=='0')
                c0++;
            else
                c1++;
        }
        if (c0>c1)
        {
            for (int i=0; i<n; i++)
            {
                printf("0");
            }
        }
        else
        {
            for (int i=0; i<n; i++)
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
