#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=count(s.begin(),s.end(),'H');
    int b=count(s.begin(),s.end(),'Q');
    int c=count(s.begin(),s.end(),'9');
    if (a || b || c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
