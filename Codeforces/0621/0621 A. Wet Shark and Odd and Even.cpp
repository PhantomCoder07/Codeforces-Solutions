#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    long long sum=accumulate(a.begin(),a.end(),0LL);
    if (sum%2==0)
        cout<<sum<<endl;
    else
    {
        for (int i=0; i<n; i++)
        {
            if (a[i]%2)
            {
                sum-=a[i];
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
