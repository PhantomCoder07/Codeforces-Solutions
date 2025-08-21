#include <stdio.h>
#include <string.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    int a=0,d=0;
    char s[n];
    scanf("%s",s);
    for (int i=0; i<n; i++)
    {
        if (s[i]=='A')
            a++;
        if (s[i]=='D')
            d++;
    }
    if (a>d)
        printf("Anton\n");
    else if (a<d)
        printf("Danik\n");
    else
        printf("Friendship\n");
    return 0;
}
