#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        if (2*w<=k1+k2 && 2*b<=(n-k1)+(n-k2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
