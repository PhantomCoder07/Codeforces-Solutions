#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long int a,b,c,d;
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        int ans=0;
        while (1)
        {
            if (b!=d)
            {
                a++;
                b++;
                ans++;
            }
            else if (b==d && a>c)
            {
                a--;
                ans++;
            }
            else if (a==c && b==d)
                break;
            else
            {
                ans=-1;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
