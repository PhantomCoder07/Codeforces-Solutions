#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        string s1=to_string(x1);
        string s2=to_string(x2);
        int x=s1.length()+p1;
        int y=s2.length()+p2;
        if (x>y)
            cout<<'>'<<endl;
        else if (y>x)
            cout<<'<'<<endl;
        else
        {
            while (s1.length()<s2.length())
                s1.push_back('0');
            while (s2.length()<s1.length())
                s2.push_back('0');
            if (s1>s2)
                cout<<'>'<<endl;
            else if (s1<s2)
                cout<<'<'<<endl;
            else
                cout<<'='<<endl;
        }
    }
    return 0;
}
