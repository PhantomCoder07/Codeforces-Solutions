#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a=1;
        scanf("%d",&n);
        while (n--)
        {
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}
