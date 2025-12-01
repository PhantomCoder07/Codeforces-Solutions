#include <stdio.h>
void swap (int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            a[i]=i+1;
        }
        if (n%2==0)
        {
            for (int i=0; i<n-1; i+=2)
            {
                swap(&a[i],&a[i+1]);
            }
            for (int i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        else
        {
            printf("%d %d %d ",a[2],a[0],a[1]);
            for (int i=3; i<n-1; i+=2)
            {
                swap(&a[i],&a[i+1]);
            }
            for (int i=3; i<n; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
