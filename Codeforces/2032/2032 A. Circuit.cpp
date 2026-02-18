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
        vector<int> a(2*n);
        for (int i=0; i<2*n; i++)
            cin>>a[i];
        int x=count(a.begin(),a.end(),1);
        int y=count(a.begin(),a.end(),0);
        cout<<(x&1)<<' '<<min(x,y)<<endl;
    }
    return 0;
}
