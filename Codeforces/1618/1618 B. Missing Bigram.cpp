#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s,a;
        cin.ignore();
        getline(cin,s);
        a.push_back(s[0]);
        int m=s.size();
        for (int i=2; i<m-1; i++)
        {
            if (s[i]==' ')
            {
                if (s[i-1]==s[i+1])
                    a.push_back(s[i+1]);
                else
                {
                    a.push_back(s[i-1]);
                    a.push_back(s[i+1]);
                }
            }
            else
                continue;
        }
        a.push_back(s[m-1]);
        if (a.size()==n)
            cout<<a<<endl;
        else
            cout<<a<<'a'<<endl;
    }
    return 0;
}
