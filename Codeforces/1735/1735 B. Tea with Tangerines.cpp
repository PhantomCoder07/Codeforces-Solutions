#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            m+=(a[i]-1)/(2*a[0]-1);
        }
        cout<<m<<endl;
    }
    return 0;
}
