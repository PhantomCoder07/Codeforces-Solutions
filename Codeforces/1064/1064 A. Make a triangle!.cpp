#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx;
    if (a>b && a>c)
        mx=a;
    else if (b>a && b>c)
        mx=b;
    else
        mx=c;
    int s=(a+b+c)-mx;
    if (s>mx)
        cout<<0<<endl;
    else
        cout<<mx-s+1<<endl;
    return 0;
}
