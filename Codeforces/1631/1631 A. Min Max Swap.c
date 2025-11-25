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
        int a[n],b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
        for (int i=0; i<n; i++)
        {
            if (a[i]<b[i])
                swap(&a[i],&b[i]);
        }
        int maxa=a[0],maxb=b[0];
        for (int i=0; i<n; i++)
        {
            if (maxa<a[i])
                maxa=a[i];
            if (maxb<b[i])
                maxb=b[i];
        }
        printf("%d\n",maxa*maxb);
    }
    return 0;
}
