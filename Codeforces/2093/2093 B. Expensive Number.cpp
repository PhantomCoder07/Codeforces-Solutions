#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        int n=s.length(),c=0;
        bool ans=false;
        for (int i=0; i<n; i++)
        {
            if (s[i]!='0')
                ans=true;
            else if (ans)
                c++;
        }
        cout<<n-(c+1)<<endl;
    }
    return 0;
}
