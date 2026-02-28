#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s,st;
        cin>>n>>s;
        st=s;
        sort(st.begin(),st.end());
        int c=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]!=st[i])
                c++;
        }
        cout<<c/2<<endl;
    }
    return 0;
}
