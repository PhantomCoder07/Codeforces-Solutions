#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a.rbegin(),a.rend());
    int sum=0,c=0;
    for (int i=0; i<n; i++)
    {
        if (sum<m)
            c++;
        sum+=a[i];
    }
    cout<<c<<endl;
    return 0;
}
