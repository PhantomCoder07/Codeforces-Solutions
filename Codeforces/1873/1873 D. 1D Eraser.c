#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k,c=0;
        scanf("%d %d",&n,&k);
        char s[n+1];
        scanf("%s",s);
        for (int i=0; i<n; )
        {
            if (s[i]=='B')
            {
                c++;
                i+=k;
            }
            else
                i++;
        }
        printf("%d\n",c);
    }
    return 0;
}
