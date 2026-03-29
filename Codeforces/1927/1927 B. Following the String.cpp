#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(26,0);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<26; j++)
            {
                if (a[i]==b[j])
                {
                    cout<<(char)('a'+j);
                    b[j]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
