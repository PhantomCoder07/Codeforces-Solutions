#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        string t=s;
        reverse(t.begin(),t.end());
        cout<<min(s,t+s)<<endl;
    }
    return 0;
}
