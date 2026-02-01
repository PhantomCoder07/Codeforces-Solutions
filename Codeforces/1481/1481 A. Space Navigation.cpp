#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int L=0,R=0,U=0,D=0;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]=='U' && U<y)
                U++;
            if (s[i]=='D' && D>y)
                D--;
            if (s[i]=='R' && R<x)
                R++;
            if (s[i]=='L' && L>x)
                L--;
        }
        if ((U==y || D==y || y==0) && (R==x || L==x || x==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
