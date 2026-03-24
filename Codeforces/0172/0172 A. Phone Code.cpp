#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> s(n);
    for (int i=0; i<n; i++)
        cin>>s[i];
    int mn=INT_MAX,c;
    int m=s[0].length();
    for (int i=1; i<n; i++)
    {
        c=0;
        for (int j=0; j<m; j++)
        {
            if (s[0][j]==s[i][j])
                c++;
            else
                break;
        }
        mn=min(mn,c);
    }
    cout<<mn<<endl;
    return 0;
}
