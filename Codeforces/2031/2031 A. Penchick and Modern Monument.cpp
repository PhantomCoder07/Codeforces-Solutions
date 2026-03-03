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
        vector<int> a(n),b(55,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        int c=*max_element(b.begin(),b.end());
        cout<<n-c<<endl;
    }
    return 0;
}
