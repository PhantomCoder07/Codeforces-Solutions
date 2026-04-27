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
        string s;
        if (n%2==1)
        {
            s+='7';
            n-=3;
        }
        while (n>0)
        {
            s+='1';
            n-=2;
        }
        cout<<s<<endl;
    }
    return 0;
}
