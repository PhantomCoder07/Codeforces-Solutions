#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x=1,y=0;
        string s;
        cin>>n>>k>>s;
        if(s.find(string(k,'1'))!=string::npos)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                if (s[i]=='1')
                    cout<<x++<<' ';
                else
                    cout<<n-y++<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
