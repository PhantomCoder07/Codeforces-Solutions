#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a;
        scanf("%d",&n);
        int even=0,odd=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if (a%2==0)
                even++;
            else
                odd++;
        }
        if (even>odd)
            printf("%d\n",odd);
        else
            printf("%d\n",even);
    }
    return 0;
}
