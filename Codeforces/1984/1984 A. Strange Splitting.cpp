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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        if (a[0]==a[n-1])
            cout<<"NO";
        else
        {
            cout<<"YES"<<endl;
            for (int i=0; i<n; i++)
            {
                if (i==1)
                    cout<<'B';
                else
                    cout<<'R';
            }
        }
        cout<<endl;
    }
    return 0;
}
