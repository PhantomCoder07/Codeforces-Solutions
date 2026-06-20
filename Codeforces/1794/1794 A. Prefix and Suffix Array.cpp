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
        vector<string> s(2*n-2),a;
        for (int i=0; i<2*n-2; i++)
        {
            cin>>s[i];
            if (s[i].length()==n-1)
                a.push_back(s[i]);
        }
        reverse(a[0].begin(),a[0].end());
        if (a[0]==a[1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
