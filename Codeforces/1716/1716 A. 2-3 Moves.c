#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
    {
        int n;
        scanf("%d",&n);
        if (n==1)
            printf("2\n");
        else
            printf("%d\n",(n+2)/3);
    }
	return 0;
}
