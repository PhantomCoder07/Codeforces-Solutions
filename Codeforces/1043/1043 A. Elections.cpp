#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int mx=*max_element(a.begin(),a.end());
    cout<<max(mx,(2*sum+n)/n)<<endl;
    return 0;
}
