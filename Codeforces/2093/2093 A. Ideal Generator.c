#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int k;
        scanf("%d",&k);
        if (k%2==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
