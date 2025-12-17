#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    vector<string> s;
    int mx=0;
    while(getline(cin,x))
    {
        s.push_back(x);
        mx=max(mx,(int)x.size());
    }
    cout<<string(mx+2,'*')<<endl;
    int a,b=1;
    for(int i=0; i<(int)s.size(); i++)
    {
        a=mx-(int)s[i].size();
        b+=a&1;
        cout<<"*"<<string(a/2+(a&1)*(b&1),' ')<<s[i]<<string(a-a/2-(a&1)*(b&1),' ')<<"*"<<endl;
    }
    cout<<string(mx+2,'*')<<endl;
    return 0;
}
