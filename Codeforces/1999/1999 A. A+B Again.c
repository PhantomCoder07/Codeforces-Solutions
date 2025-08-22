#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int d=n%10;
        n/=10;
        int sum=d+n;
        printf("%d\n",sum);
    }
    return 0;
}
