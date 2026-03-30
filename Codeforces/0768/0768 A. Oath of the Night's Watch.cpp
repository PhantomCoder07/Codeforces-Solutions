#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    int mn=count(a.begin(),a.end(),a[0]);
    int mx=count(a.begin(),a.end(),a[n-1]);
    cout<<(a[0]==a[n-1]?0:(n-mx-mn))<<endl;
    return 0;
}
