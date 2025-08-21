#include<stdio.h>
int main()
{
    int k,w,c=0,ans;
    long int n;
    scanf("%d %ld %d",&k,&n,&w);
    for (int i=1; i<=w; i++)
    {
        c=c+(i*k);
    }
    if (c>=n)
    {
        ans=c-n;
        printf("%d\n",ans);
    }
    else
        printf("0\n");
    return 0;
}
