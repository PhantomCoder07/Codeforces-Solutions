#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c,d=0,m=1;
        cin>>n>>c;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        for(auto i: a)
        {
            if(i*m<=c)
                m*=2;
            else
                d++;
        }
        cout<<d<<endl;
    }
}
