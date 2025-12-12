#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        if (n%2==0)
            printf("%d\n",n/4+1);
        else
            printf("0\n");
    }
    return 0;
}
