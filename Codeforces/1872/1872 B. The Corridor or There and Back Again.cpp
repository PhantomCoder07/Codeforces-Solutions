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
        vector<int> d(n),s(n);
        for (int i=0; i<n; i++)
            cin>>d[i]>>s[i];
        int mn=INT_MAX;
        for (int i=0; i<n; i++)
        {
            mn=min(mn,d[i]+(s[i]-1)/2);
        }
        cout<<mn<<endl;
    }
    return 0;
}
