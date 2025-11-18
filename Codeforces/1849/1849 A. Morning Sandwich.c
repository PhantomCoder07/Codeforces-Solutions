#include <stdio.h>
int min (int a, int b)
{
    if (a>b)
        return b;
    else
        return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int b,c,h;
        scanf("%d %d %d",&b,&c,&h);
        printf("%d\n",2*min(b-1,c+h)+1);
    }
    return 0;
}
