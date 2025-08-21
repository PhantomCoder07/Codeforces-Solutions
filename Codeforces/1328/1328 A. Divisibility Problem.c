#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        long int a,b,d,ans;
        scanf("%ld %ld",&a,&b);
        if (a%b==0)
        {
            printf("0\n");
        }
        else
        {
            d=a/b;
            ans=(d+1)*b;
            printf("%d\n",ans-a);
        }
    }
    return 0;
}
