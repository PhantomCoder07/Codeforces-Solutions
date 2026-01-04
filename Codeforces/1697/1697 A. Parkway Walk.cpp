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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m-=a[i];
        }
        cout<<max(0,-m)<<endl;
    }
    return 0;
}
