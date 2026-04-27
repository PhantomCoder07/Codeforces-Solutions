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
        long long sum1=accumulate(a.begin(),a.end(),0LL);
        long long sum2=n*k;
        if (sum1%2==1 || sum2%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
