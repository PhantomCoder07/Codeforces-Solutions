#include <stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    int a[t];
    for (int i=0; i<t; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for (int i=0; i<t; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
            c++;
        }
        if (a[i]>max)
        {
            max=a[i];
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
