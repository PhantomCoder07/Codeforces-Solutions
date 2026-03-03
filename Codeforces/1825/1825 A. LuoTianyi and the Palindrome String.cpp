#include <bits/stdc++.h>
using namespace std;
bool is_palindrome (string s)
{
    int n=s.length();
    for (int i=0; i<n/2; i++)
    {
        if (s[i]!=s[n-1-i])
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
        if (is_palindrome(s))
        {
            sort(s.begin(),s.end());
            if (s[0]==s[n-1])
                cout<<-1<<endl;
            else
                cout<<n-1<<endl;
        }
        else
            cout<<n<<endl;
    }
    return 0;
}
