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
        int n=s.size();
        int N=0,Y=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='Y')
                Y++;
            else
                N++;
        }
        if (Y>1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
