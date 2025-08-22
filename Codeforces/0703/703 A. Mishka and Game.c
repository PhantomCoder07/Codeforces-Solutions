#include <stdio.h>
int main()
{
    int n,cm=0,cc=0;
    scanf("%d",&n);
    while (n--)
    {
        int m,c;
        scanf("%d %d",&m,&c);
        if (m>c)
            cm++;
        else if (m<c)
            cc++;
    }
    if (cm>cc)
        printf("Mishka");
    else if (cm<cc)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}
