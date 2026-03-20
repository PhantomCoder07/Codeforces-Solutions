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
        if (n%3==2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool ans=true;
        for (int i=1; i<n; i+=3)
        {
            if (s[i]!=s[i+1] && i+1<n)
            {
                ans=false;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
