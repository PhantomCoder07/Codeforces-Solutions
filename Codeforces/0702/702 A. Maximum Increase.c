#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int c=1,max=1;
    for (int i=1; i<n; i++)
    {
        if (a[i]>a[i-1])
        {
            c++;
        }
        else
        {
            if (c>max)
                max=c;
            c=1;
        }
    }
    if (c>max)
        max=c;
    printf("%d",max);
    return 0;
}
