#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    int mx=*max_element(a.begin(),a.end());
    int j=-1;
    for (int i=0; i<n; i++)
        if (a[i]==mx)
            j=i+1;
    sort(a.begin(),a.end());
    cout<<j<<' '<<a[n-2]<<endl;
    return 0;
}
