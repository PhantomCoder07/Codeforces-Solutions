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
    int b=0,c=0,d=0;
    for (int i=0; i<n; )
    {
        if (i<n)
            b+=a[i++];
        if (i<n)
            c+=a[i++];
        if (i<n)
            d+=a[i++];
    }
    if (b>c && b>d)
        printf("chest\n");
    else if (c>b && c>d)
        printf("biceps\n");
    else
        printf("back\n");
    return 0;
}
