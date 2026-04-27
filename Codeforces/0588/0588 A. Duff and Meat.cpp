#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0;
    cin>>n;
    vector<int> a(n),p(n);
    for (int i=0; i<n; i++)
        cin>>a[i]>>p[i];
    int ans=a[0]*p[0];
    for (int i=1; i<n; i++)
    {
        if (p[i]<=p[j])
            j=i;
        ans+=(a[i]*p[j]);
    }
    cout<<ans<<endl;
    return 0;
}
