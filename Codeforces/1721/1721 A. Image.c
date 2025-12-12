#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a,b,c,d;
        scanf(" %c%c",&a,&b);
        scanf(" %c%c",&c,&d);
        int count=0;
        if(b!=a)
            count++;
        if(c!=b && c!=a)
            count++;
        if(d!=a && d!=b && d!=c)
            count++;
        printf("%d\n",count);
    }
    return 0;
}
