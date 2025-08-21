#include <stdio.h>
int main()
{
    int n,m,c=0,d=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&m);
        if (m==-1)
        {
            if (d>0)
                d--;
            else
                c++;
        }
        else
            d+=m;
    }
    printf("%d",c);
    return 0;
}
