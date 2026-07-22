#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a==9 && b==1)
        cout<<9<<' '<<10<<endl;
    else if (a>b || abs(a-b)>=2)
        cout<<-1<<endl;
    else
    {
        if (a==b)
            cout<<a<<1<<' '<<b<<2<<endl;
        else
            cout<<a<<' '<<b<<endl;
    }
    return 0;
}
