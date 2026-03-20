#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int c=count(s.begin(),s.end(),'0');
    if (n==1)
        cout<<s<<endl;
    else
    {
        cout<<1;
        for (int i=0; i<c; i++)
            cout<<0;
    }
    return 0;
}
