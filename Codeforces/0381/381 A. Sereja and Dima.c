#include <stdio.h>
int main()
{
    int n,s=0,d=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sl=0,sr=n-1,i=1;
    while (sl<=sr)
    {
        if (i%2==0)
        {
            if (a[sl]>=a[sr])
                d+=a[sl++];
            else
                d+=a[sr--];
        }
        else
        {
            if (a[sl]>=a[sr])
                s+=a[sl++];
            else
                s+=a[sr--];
        }
        i++;
    }
    printf("%d %d",s,d);
    return 0;
}
