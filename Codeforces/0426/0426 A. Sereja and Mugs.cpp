#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,sum=0;
    cin>>n>>s;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int mx=*max_element(a.begin(),a.end());
    if (sum-mx<=s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
