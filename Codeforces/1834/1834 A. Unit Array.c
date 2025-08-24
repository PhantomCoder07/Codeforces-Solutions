#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a;
        scanf("%d",&n);
        int po=0,ne=0,c=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if (a==1)
                po++;
            else
                ne++;
        }
        while (1)
        {
            if (po<ne || ne%2!=0)
            {
                c++;
                po++;
                ne--;
            }
            else
                break;
        }
        printf("%d\n",c);
    }
    return 0;
}
