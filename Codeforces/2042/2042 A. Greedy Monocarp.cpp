#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        int sum=0;
        for (int i=0; i<n; i++)
        {
            if (sum+a[i]<=k)
                sum+=a[i];
            else
                break;
        }
        cout<<k-sum<<endl;
    }
    return 0;
}
