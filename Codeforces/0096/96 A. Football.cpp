#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int c=0;
    for (int i=0; i<n-1; i++)
    {
        if (s[i]==s[i+1])
            c++;
        else
            c=0;
        if (c==6)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
