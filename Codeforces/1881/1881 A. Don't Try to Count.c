#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,i;
		scanf("%d %d",&n,&m);
		char x[3000],s[3000],temp[3000];
		scanf("%s %s",x,s);
		for(i=0; i<=5; i++)
		{
			if(strstr(x,s)!=NULL)
            {
                printf("%d\n",i);
                break;
            }
			strcpy(temp,x);
			strcat(x,temp);
		}
		if(i==6)
            printf("-1\n");
	}
	return 0;
}
