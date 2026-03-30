#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int st=0,ed=n-1;
        while (st<ed)
        {
            if (a[st]+a[ed]==k)
            {
                c++;
                st++;
                ed--;
            }
            else if (a[st]+a[ed]>k)
                ed--;
            else
                st++;
        }
        cout<<c<<endl;
    }
    return 0;
}
