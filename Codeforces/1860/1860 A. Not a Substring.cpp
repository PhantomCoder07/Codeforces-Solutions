#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,a1,a2;
        cin>>s;
        int n=s.length();
        for (int i=0; i<n; i++)
            a1+="()";
        for (int i=0; i<n; i++)
            a2+='(';
        for (int i=n; i<2*n; i++)
            a2+=')';
        bool ans1=a1.contains(s);
        bool ans2=a2.contains(s);
        if (ans1 && ans2)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<(ans1?a2:a1)<<endl;
        }
    }
    return 0;
}
