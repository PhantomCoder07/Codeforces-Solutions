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
        if (n==1)
            cout<<1<<endl;
        else if (n%2)
            cout<<-1<<endl;
        else
        {
            vector<int> a;
            for (int i=0; i<n; i++)
                a.push_back(i+1);
            for (int i=0; i<n-1; i+=2)
                swap(a[i],a[i+1]);
            for (int i=0; i<n; i++)
                cout<<a[i]<<' ';
            cout<<endl;
        }
    }
    return 0;
}
