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
        vector<int> a(n),b(101,0);
        int c=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        for (int i=1; i<=100; i++)
        {
            c+=b[i]/3;
        }
        cout<<c<<endl;
    }
    return 0;
}
