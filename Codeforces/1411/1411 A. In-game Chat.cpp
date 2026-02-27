#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        string s;
        cin>>n>>s;
        for (int i=n-1; i>=0; i--)
        {
            if (s[i]!=')')
                break;
            c++;
        }
        if (c>n/2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
