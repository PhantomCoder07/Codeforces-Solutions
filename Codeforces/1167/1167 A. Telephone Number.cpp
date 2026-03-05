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
        int idx=-1;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='8')
            {
                idx=i+1;
                break;
            }
        }
        if (n-idx>=10 && idx!=-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
