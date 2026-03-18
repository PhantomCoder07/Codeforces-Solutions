#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int c=n;
        vector<string> s(n);
        for (int i=0; i<n; i++)
        {
            cin>>s[i];
            if (s[i]!=s[0])
                c--;
        }
        cout<<c<<endl;
    }
    return 0;
}
