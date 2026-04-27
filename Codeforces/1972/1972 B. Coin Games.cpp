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
        int c=count(s.begin(),s.end(),'U');
        cout<<(c%2?"YES":"NO")<<endl;
    }
    return 0;
}
