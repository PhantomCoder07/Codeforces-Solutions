#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char a[100000];
		scanf("%s",a);
		if (a[0]=='1' && a[1]=='0' && a[2]!='\0')
        {
            if ( a[2]=='0' || a[2]=='1' && a[3]=='\0')
                printf("NO\n");
            else
                printf("YES\n");
        }
        else
            printf("NO\n");

	}
	return 0;
}
