#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=count(s.begin(),s.end(),'a');
    int n=s.length();
    cout<<min(n,2*c-1)<<endl;
    return 0;
}
