#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a,sum=0;
        scanf("%d",&n);
        for (int i=0; i<n-1; i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum*(-1));
    }
    return 0;
}
