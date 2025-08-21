#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    char s[105];
    char c[5][15]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
    for (int i=0; i<n; i++)
    {
        scanf("%s",s);
        if (strcmp(s,c[0])==0)
            sum+=4;
        else if (strcmp(s,c[1])==0)
            sum+=6;
        else if (strcmp(s,c[2])==0)
            sum+=8;
        else if (strcmp(s,c[3])==0)
            sum+=12;
        else if (strcmp(s,c[4])==0)
            sum+=20;
    }
    printf("%d",sum);
    return 0;
}
