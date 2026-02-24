#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a=ceil(n/2)+1;
        int b=ceil(m/2)+1;
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}
