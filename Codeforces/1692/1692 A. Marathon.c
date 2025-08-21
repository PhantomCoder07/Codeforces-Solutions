#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int a,b,c,d,e=0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (a<b)
            e++;
        if (a<c)
            e++;
        if (a<d)
            e++;
        printf("%d\n",e);
    }
    return 0;
}
