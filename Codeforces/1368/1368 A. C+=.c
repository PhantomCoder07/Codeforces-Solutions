#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,n,c=0;
        scanf("%d %d %d",&a,&b,&n);
        while (a<=n && b<=n)
        {
            if (a<b)
                a+=b;
            else
                b+=a;
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
