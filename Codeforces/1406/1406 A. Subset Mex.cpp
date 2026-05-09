#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x=0,y=0;
        cin>>n;
        vector<int> a(n),c(101,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            c[a[i]]++;
        }
        while (c[x]>0)
            x++;
        while (c[y]>1)
            y++;
        cout<<x+y<<endl;
    }
    return 0;
}
