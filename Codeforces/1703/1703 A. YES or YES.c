#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        char a,b,c;
        scanf(" %c%c%c",&a,&b,&c);
        if ((a=='Y' || a=='y') && (b=='E' || b=='e') && (c=='S' || c=='s'))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
