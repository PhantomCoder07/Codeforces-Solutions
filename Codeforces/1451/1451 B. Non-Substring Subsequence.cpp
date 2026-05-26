#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        string s;
        cin>>n>>q>>s;
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            bool ans=false;
            for (int i=0; i<l-1; i++)
            {
                if (s[i]==s[l-1])
                {
                    ans=true;
                    break;
                }
            }
            for (int i=r; i<n; i++)
            {
                if (s[i]==s[r-1])
                {
                    ans=true;
                    break;
                }
            }
            cout<<(ans?"YES":"NO")<<endl;
        }
    }
    return 0;
}
