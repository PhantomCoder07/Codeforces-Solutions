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
        reverse(a.begin(),a.end());
        for (int i=0; i<n; i++)
        {
            if (i%2)
                cout<<a[i]<<' ';
            else
                cout<<(-1)*a[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
