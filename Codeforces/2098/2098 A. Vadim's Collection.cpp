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
        vector<int> a(10,0);
        for (int i=0; i<10; i++)
            a[s[i]-'0']++;
        for (int i=0; i<10; i++)
        {
            for (int j=9-i; j<10; j++)
            {
                if (a[j])
                {
                    cout<<j;
                    a[j]--;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
