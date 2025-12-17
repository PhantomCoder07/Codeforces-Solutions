#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int sum=0,c=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    for (int i=n-1; i>=0; i--)
    {
        c+=a[i];
        if (c*2>sum)
        {
            cout<<n-i<<endl;
            return 0;
        }
    }
    return 0;
}
