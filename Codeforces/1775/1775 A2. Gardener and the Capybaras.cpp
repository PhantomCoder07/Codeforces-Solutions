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
        int n=s.length();
        bool ans=false;
        for (int i=1; i<n-1; i++)
        {
            if (s[i]=='a')
            {
                cout<<s.substr(0,i)<<' ';
                cout<<"a ";
                cout<<s.substr(i+1)<<endl;
                ans=true;
                break;
            }
        }
        if (!ans)
        {
            cout<<s[0]<<' ';
            cout<<s.substr(1,n-2)<<' ';
            cout<<s[n-1]<<endl;
        }
    }
    return 0;
}
