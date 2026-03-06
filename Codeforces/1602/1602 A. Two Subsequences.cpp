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
        char a=*min_element(s.begin(),s.end());
        auto b=find(s.begin(),s.end(),a);
        s.erase(b);
        cout<<a<<' '<<s<<endl;
    }
    return 0;
}
