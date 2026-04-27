#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,c=1;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]==c)
                c++;
        }
        cout<<(n-c+k)/k<<endl;
    }
    return 0;
}
