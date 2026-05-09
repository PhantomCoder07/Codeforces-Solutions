#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int c=count(s.begin(),s.end(),'1');
        if (c%2)
            cout<<"NO"<<endl;
        else if (c==2)
        {
            bool ans=true;
            for (int i=0; i<n-1; i++)
            {
                if (s[i]=='1' && s[i+1]=='1')
                {
                    ans=false;
                    break;
                }
            }
            cout<<(ans?"YES":"NO")<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
