#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
		scanf("%d",&n);
		int sum1=0,sum2=0;
		sum1+=pow(2,n);
		for (int i=1; i<n/2; i++)
        {
            sum1+=pow(2,i);
        }
        for (int i=n/2; i<n; i++)
        {
            sum2+=pow(2,i);
        }
        printf("%d\n",abs(sum1-sum2));
	}
	return 0;
}
