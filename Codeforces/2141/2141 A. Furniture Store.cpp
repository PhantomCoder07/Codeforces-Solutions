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
        vector<int> a(n),b;
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<i; j++)
            {
                if (a[j]<a[i])
                {
                    b.push_back(i+1);
                    break;
                }
            }
        }
        sort(b.begin(),b.end());
        cout<<b.size()<<endl;
        for (int i=0; i<b.size(); i++)
            cout<<b[i]<<' ';
        cout<<endl;
    }
    return 0;
}
