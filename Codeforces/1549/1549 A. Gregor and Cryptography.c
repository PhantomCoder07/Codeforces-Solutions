#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int P;
        scanf("%d",&P);
        for (int i=2,j=P-1; i<P,j>=1; i++,j--)
        {
            if (P%i==P%j)
            {
                printf("%d %d\n",i,j);
                break;
            }
        }
    }
    return 0;
}
