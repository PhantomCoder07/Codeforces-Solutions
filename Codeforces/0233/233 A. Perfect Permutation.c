#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2==1)
        printf("-1");
    else
    {
        for (int i=n; i>=1; i--)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
