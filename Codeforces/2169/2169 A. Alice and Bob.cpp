#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,l=0,r=0;
        cin>>n>>a;
        vector<int> v(n);
        for (int i=0; i<n; i++)
        {
            cin>>v[i];
            if (v[i]>a)
                r++;
            if (v[i]<a)
                l++;
        }
        cout<<(l>r?a-1:a+1)<<endl;
    }
    return 0;
}
