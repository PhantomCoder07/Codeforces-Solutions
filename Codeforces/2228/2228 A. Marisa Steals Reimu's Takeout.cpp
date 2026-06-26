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
        int c0=count(a.begin(),a.end(),0);
        int c1=count(a.begin(),a.end(),1);
        int c2=count(a.begin(),a.end(),2);
        cout<<c0+min(c1,c2)+abs(c1-c2)/3<<endl;
    }
    return 0;
}
