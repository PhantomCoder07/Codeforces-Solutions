#include <stdio.h>
int gcd (int a, int b)
{
    for (int i=a; i>0; i--)
    {
        if (a%i==0 && b%i==0)
            return i;
    }
}
int main()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    int ans=0;
    for (int i=0; ; i++)
    {
        if (i%2==0)
            n-=gcd(a,n);
        else
            n-=gcd(b,n);
        if (n<=0)
        {
            ans=i;
            break;
        }
    }
    if (ans%2==0)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
