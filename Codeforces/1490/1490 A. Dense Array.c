#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        float a[n],k;
        for (int i=0; i<n; i++)
        {
            scanf("%f",&a[i]);
        }
        for (int i=0; i<n-1; i++)
        {
            if (a[i+1]>a[i])
                k=a[i+1]/a[i];
            else
                k=a[i]/a[i+1];
            while (k>2)
            {
                k/=2;
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
