#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        char c='a';
        for (int i=0; i<n; i++)
        {
            if (c-'a'>k-1)
                c='a';
            cout<<c++;
        }
        cout<<endl;
    }
    return 0;
}
