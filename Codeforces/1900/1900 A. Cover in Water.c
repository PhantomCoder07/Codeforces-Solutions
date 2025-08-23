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
        scanf("%s",s);
        int c=0,d=0,max=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='.')
            {
                d++;
                c++;
            }
            else
                c=0;
            if (c>max)
                max=c;
        }
        if (max>2)
            printf("2\n");
        else
            printf("%d\n",d);
    }
    return 0;
}
