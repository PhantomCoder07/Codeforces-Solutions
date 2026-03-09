#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        string s1,s2;
        cin>>n>>m>>s1>>s2;
        bool ans1=true,ans2=true,ans=true;
        for (int i=0; i<n-1; i++)
            if (s1[i]==s1[i+1])
                ans=false;
        for (int i=0; i<n-1; i++)
            if (s1[i]==s1[i+1])
                if (s2[0]==s1[i] || s2[m-1]==s1[i])
                    ans1=false;
        for (int i=0; i<m-1; i++)
            if (s2[i]==s2[i+1])
                ans2=false;
        if (ans)
            cout<<"YES"<<endl;
        else if (ans1 && ans2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
