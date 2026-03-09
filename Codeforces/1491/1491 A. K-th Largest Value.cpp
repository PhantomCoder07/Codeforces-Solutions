#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    int c=count(a.begin(),a.end(),1);
    int t,x,k;
    while (q--)
    {
        cin>>t;
        if (t==1)
        {
            cin>>x;
            if (a[x-1])
                c--;
            else
                c++;
            a[x-1]=1-a[x-1];
        }
        else
        {
            cin>>k;
            if (c>=k)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}
