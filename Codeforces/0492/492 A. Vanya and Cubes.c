#include<stdio.h>
int main()
{
    int n,c=0,h=0;
    scanf("%d",&n);
    while (n>c+h)
    {
        h++;
        c+=h;
        n-=c;
    }
    printf("%d",h);
    return 0;
}
