#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[2];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=abs(a[0]-a[n-1]);
    b[0]=1,b[1]=n;
    for (int i=0; i<n-1; i++)
    {
        if (abs(a[i]-a[i+1])<min)
        {
            min=abs(a[i]-a[i+1]);
            b[0]=i+1;
            b[1]=i+2;
        }
    }
    printf("%d %d\n",b[0],b[1]);
    return 0;
}
