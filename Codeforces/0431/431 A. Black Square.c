#include <stdio.h>
#include <string.h>
int main()
{
    int a1,a2,a3,a4,sum=0;
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    char n[100005];
    scanf("%s",n);
    int l=strlen(n);
    for (int i=0; i<l; i++)
    {
        if (n[i]-'0'==1)
            sum+=a1;
        else if (n[i]-'0'==2)
            sum+=a2;
        else if (n[i]-'0'==3)
            sum+=a3;
        else if (n[i]-'0'==4)
            sum+=a4;
    }
    printf("%d",sum);
    return 0;
}
