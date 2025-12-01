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
        set<char> a;
        int c=1;
        for (auto i: s)
        {
            a.insert(i);
            if (a.size()>3)
            {
                a.clear();
                a.insert(i);
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
