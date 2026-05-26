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
        int mx=*max_element(a.begin(),a.end());
        int mn=*min_element(a.begin(),a.end());
        if (mn+k>=mx-k)
            cout<<mn+k<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
