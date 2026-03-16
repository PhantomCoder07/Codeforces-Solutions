#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int mni=0,mxi=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]==n)
            mxi=i+1;
        if (a[i]==1)
            mni=i+1;
    }
    cout<<max({abs(n-mni),abs(1-mni),abs(n-mxi),abs(1-mxi)})<<endl;
    return 0;
}
