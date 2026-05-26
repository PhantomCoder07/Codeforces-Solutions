#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long int a,b,c,d;
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        long int ans1=d-b;
        long int ans2=ans1+(a-c);
        if (ans1<0 || ans2<0)
            printf("-1\n");
        else
            printf("%ld\n",ans1+ans2);
    }
    return 0;
}
