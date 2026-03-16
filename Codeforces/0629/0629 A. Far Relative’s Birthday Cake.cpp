#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    vector<int> a(205,0),b(205,0);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            char ch;
            cin>>ch;
            if (ch=='C')
            {
                ans+=a[i]+b[j];
                a[i]++;
                b[j]++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
