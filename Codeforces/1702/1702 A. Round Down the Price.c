#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m,c=0;
        scanf("%d",&m);
        int n=1;
        while (m>=n*10)
        {
            n*=10;
        }
        printf("%d\n",m-n);
    }
    return 0;
}
