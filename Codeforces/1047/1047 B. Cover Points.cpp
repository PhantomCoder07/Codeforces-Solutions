#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0;
    cin>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        mx=max(mx,x+y);
    }
    cout<<mx<<endl;
    return 0;
}
