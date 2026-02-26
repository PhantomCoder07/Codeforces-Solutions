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
        int e=0,o=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            (a[i]%2==0)?e++:o++;
        }
        if (o>=3)
        {
            cout<<"YES"<<endl;
            o=3;
            for (int i=0; i<n; i++)
            {
                if (a[i]%2==1 && o>0)
                {
                    cout<<i+1<<' ';
                    o--;
                }
            }
        }
        else if (e>=2 && o>=1)
        {
            cout<<"YES"<<endl;
            e=2,o=1;
            for (int i=0; i<n; i++)
            {
                if (a[i]%2==0 && e>0)
                {
                    cout<<i+1<<' ';
                    e--;
                }
                if (a[i]%2==1 && o>0)
                {
                    cout<<i+1<<' ';
                    o--;
                }
            }
        }
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
