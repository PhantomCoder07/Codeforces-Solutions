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
        int c1=count(s.begin(),s.end(),'(');
        int c2=count(s.begin(),s.end(),')');
        cout<<(c1==c2?"YES":"NO")<<endl;
    }
    return 0;
}
