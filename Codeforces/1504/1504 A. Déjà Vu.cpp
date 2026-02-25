#include <bits/stdc++.h>
using namespace std;
bool is_palindrome (string s)
{
    int n=s.length();
    for(int i=0; i<n/2; i++)
    {
        if(s[i]!=s[n-i-1])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int c=count(s.begin(),s.end(),'a');
        if (c==n)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if (!is_palindrome('a'+s))
                cout<<'a'<<s<<endl;
            else
                cout<<s<<'a'<<endl;
        }
    }
    return 0;
}
