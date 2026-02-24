#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        double n,m;
        cin>>n>>m;
        vector<double> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        double sum=0.0;
        for (int i=0; i<n; i++)
        {
            for (int j=i; j<n; j++)
            {
                sum+=(a[j]/(j+1));
            }
        }
        if (abs(sum-m)<1e-6)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
