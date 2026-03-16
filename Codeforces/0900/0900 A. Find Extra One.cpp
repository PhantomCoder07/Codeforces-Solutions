#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n;
    m=n;
    while (m--)
    {
        int x,y;
        cin>>x>>y;
        if (x<0)
            c++;
    }
    if (c<=1 || (n-c)<=1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
