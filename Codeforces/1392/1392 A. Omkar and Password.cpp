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
        int c=count(a.begin(),a.end(),a[0]);
        if (c==n)
            cout<<n<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
