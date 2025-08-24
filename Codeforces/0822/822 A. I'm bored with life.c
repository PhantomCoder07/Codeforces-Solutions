#include <stdio.h>
#define ll long long int
ll factorial (ll n)
{
    if (n==1 || n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if (A>B)
        printf("%lld",factorial(B));
    else
        printf("%lld",factorial(A));
    return 0;
}
