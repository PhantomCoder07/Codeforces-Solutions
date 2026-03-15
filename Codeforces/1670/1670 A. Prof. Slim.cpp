#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (is_sorted(a.begin(),a.end()))
        {
            cout<<"YES"<<endl;
            continue;
        }
        int st=0,ed=n-1;
        while (st<ed)
        {
            if (a[st]>0 && a[ed]<0)
            {
                a[st]*=(-1);
                a[ed]*=(-1);
                st++;
                ed--;
            }
            else if (a[st]<0)
                st++;
            else if (a[ed]>0)
                ed--;
        }
        if (is_sorted(a.begin(),a.end()))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
