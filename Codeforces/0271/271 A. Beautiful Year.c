#include<stdio.h>
int main()
{
    int y,a,b,c,d,temp;
    scanf("%d",&y);
    while (1)
    {
        temp=y+1;
        a=temp%10;
        temp/=10;
        b=temp%10;
        temp/=10;
        c=temp%10;
        temp/=10;
        d=temp%10;
        temp/=10;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
        else
            y++;
    }
    printf("%d",y+1);
    return 0;
}
