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
        vector<int> odd,even;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
                even.push_back(i+1);
            else
                odd.push_back(i+1);
        }
        if (!even.empty())
        {
            cout<<1<<endl;
            cout<<even[0]<<endl;
        }
        else if (odd.size()>=2)
        {
            cout<<2<<endl;
            cout<<odd[0]<<' '<<odd[1]<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
