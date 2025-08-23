#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int ans,moves;
		if (a==b)
            printf("0\n");
        else
        {
            if (a>b)
                ans=a-b;
            else
                ans=b-a;
            moves=(ans+(2*c)-1)/(2*c);
            printf("%d\n",moves);
        }
	}
	return 0;
}
