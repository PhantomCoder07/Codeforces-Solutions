#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n-2; i+=2)
        {
            printf("-1 3 ");
        }
        if(n%2==0)
            printf("-1 2 ");
        else
            printf("-1 ");
        printf("\n");
    }
    return 0;
}
