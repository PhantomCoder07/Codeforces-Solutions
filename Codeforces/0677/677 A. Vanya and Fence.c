#include<stdio.h>
int main()
{
    int n,h,c=0;
    scanf("%d %d",&n,&h);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (a[i]<=h)
            c++;
        else
        {
            c+=2;
        }
    }
    printf("%d\n",c);
    return 0;
}
