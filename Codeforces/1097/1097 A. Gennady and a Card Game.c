#include <stdio.h>
int main()
{
    char a[3];
    scanf("%s",a);
    int c=0;
    char b[3];
    for (int i=0; i<5; i++)
    {
        scanf("%s",b);
        if (b[0]==a[0] || b[1]==a[1])
            c++;
    }
    if (c==0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
