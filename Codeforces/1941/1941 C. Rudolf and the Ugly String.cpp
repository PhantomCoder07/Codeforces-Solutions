#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        string s;
        cin>>n>>s;
        for (int i=0; i<n-2; i++)
        {
            if (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e' && i<n-4)
            {
                c++;
                i+=4;
            }
            if (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')
            {
                c++;
                i+=2;
            }
            else if (s[i]=='p' && s[i+1]=='i' && s[i+2]=='e')
            {
                c++;
                i+=2;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
