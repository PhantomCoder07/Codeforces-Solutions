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
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        long long sum=0;
        for (int i=0; i<n; i++)
        {
            sum+=1LL*a[i]*max(0,m-i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
