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
        vector<char> st;
        for (auto c: s)
        {
            if (!st.empty() && st.back()==c)
                st.pop_back();
            else
                st.push_back(c);
        }
        if (st.empty())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
