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
        int n=s.length(),c=0;
        for (int i=1; i<n-1; i++)
        {
            if (s[i]=='(')
                c++;
            else
                c--;
            if (c<0)
                break;
        }
        cout<<(c==0?"NO":"YES")<<endl;
    }
    return 0;
}
