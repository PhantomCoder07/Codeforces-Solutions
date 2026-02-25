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
        vector<int> a(n),b;
        for (int i=0; i<n; i++)
            cin>>a[i];
        int sum=0;
        for (int i=0; i<n-1; i++)
        {
            int d=abs(a[i]-a[i+1]);
            sum+=d;
            b.push_back(d);
        }
        sort(b.begin(),b.end());
        for (int i=1; i<k; i++)
        {
            sum-=b.back();
            b.pop_back();
        }
        cout<<sum<<endl;
    }
    return 0;
}
