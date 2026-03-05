#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(2*n);
        for (int i=0; i<2*n; i++)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        long long sum=0;
        for (int i=0; i<2*n-1; i+=2)
        {
            sum+=min(a[i],a[i+1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
