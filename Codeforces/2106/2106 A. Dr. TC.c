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
        int o=0,z=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='1')
                o++;
            else
                z++;
        }
        printf("%d\n",z*(o+1)+o*(o-1));
    }
    return 0;
}
