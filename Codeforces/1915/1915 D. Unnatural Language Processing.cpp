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
        cout<<s[0];
        for (int i=1; i<n-1; i++)
        {
            if (s[i+1]=='a'||s[i+1]=='e')
                cout<<'.';
            cout<<s[i];
        }
        cout<<s[n-1]<<endl;
    }
    return 0;
}
