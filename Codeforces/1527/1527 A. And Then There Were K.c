#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k=1;
        scanf("%d",&n);
        while (k*2<=n)
        {
            k*=2;
        }
        printf("%d\n",k-1);
    }
    return 0;
}
