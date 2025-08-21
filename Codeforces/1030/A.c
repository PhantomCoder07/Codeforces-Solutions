#include<stdio.h>
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]==1)
            ans=1;
    }
    if (ans==1)
        printf("HARD");
    else
        printf("EASY");
    return 0;
}
