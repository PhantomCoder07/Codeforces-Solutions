#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int c[100]={};
        for (int i=0; i<k; i++)
        {
            c[i]=1;
        }
        for (int i=0; i<n; i++)
        {
            printf("%d",c[i]);
        }
        printf("\n");
    }
    return 0;
}
