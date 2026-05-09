#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        bool ans=true;
        for (int i=0; i<k; i++)
        {
            if (s[i]!=s[n-1-i])
            {
                ans=false;
                break;
            }
        }
        if (n==2*k)
            cout<<"NO"<<endl;
        else if (ans || k==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
