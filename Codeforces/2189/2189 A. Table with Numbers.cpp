#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        int x=0,y=0,z=0;
        for (int i=0; i<n; i++)
        {
            bool r=(a[i]<=h);
            bool c=(a[i]<=l);
            if (r)
                x++;
            if (c)
                y++;
            if (r || c)
                z++;
        }
        cout<<min({x,y,(z/2)})<<endl;
    }
    return 0;
}
