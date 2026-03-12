#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k1,k2;
        cin>>n>>k1>>k2;
        vector<int> a(k1),b(k2);
        for (int i=0; i<k1; i++)
            cin>>a[i];
        for (int i=0; i<k2; i++)
            cin>>b[i];
        int mxa=*max_element(a.begin(),a.end());
        int mxb=*max_element(b.begin(),b.end());
        if (mxa>mxb)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
