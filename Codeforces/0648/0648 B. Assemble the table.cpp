#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(2*n);
    for (int i=0; i<2*n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for (int i=0; i<n; i++)
        cout<<a[i]<<' '<<a[2*n-i-1]<<endl;
    return 0;
}
