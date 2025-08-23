#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,ans1,ans2;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (s[i]=='B')
            {
                ans1=i;
                break;
            }
        }
        for (int i=n-1; i>=0; i--)
        {
            if (s[i]=='B')
            {
                ans2=i;
                break;
            }
        }
        printf("%d\n",ans2-ans1+1);
    }
    return 0;
}
