#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n;
        scanf("%lld",&n);
        int a=sqrt(n);
        int b=cbrt(n);
        int c=sqrt(b);
        printf("%d\n",a+b-c);
    }
    return 0;
}
