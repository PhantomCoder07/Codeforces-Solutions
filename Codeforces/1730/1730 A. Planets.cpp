#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c,m=0;
        cin>>n>>c;
        vector<int> a(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]<=c)
                m++;
        }
        cout<<m<<endl;
    }
    return 0;
}
