#include <bits/stdc++.h>
using namespace std;
int solve (vector<int> &a, int n)
{
    for (int i=0; i<n-1; i++)
    {
        if (a[i]!=a[i+1])
            return a[i+1];
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    if (solve(a,n)==0)
        cout<<"NO"<<endl;
    else
        cout<<solve(a,n)<<endl;
    return 0;
}
