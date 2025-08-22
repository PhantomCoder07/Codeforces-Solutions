#include <stdio.h>
int main()
{
    int n,k,y,c=0;
    scanf("%d %d",&n,&k);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&y);
        if (y+k<=5)
            c++;
    }
    printf("%d",c/3);
    return 0;
}
