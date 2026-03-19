#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int> a(n+1),b(n+1),tm(n+1);
        for (int i=1; i<=n; i++)
            cin>>a[i]>>b[i];
        for (int i=1; i<=n; i++)
            cin>>tm[i];
        for (int i=0; i<n; i++)
        {
            sum=max(sum+(b[i]-a[i]+1)/2,b[i]);
            sum+=a[i+1]-b[i]+tm[i+1];
        }
        cout<<sum<<endl;
    }
    return 0;
}
