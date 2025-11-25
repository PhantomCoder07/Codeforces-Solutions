#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,j=0;
        cin>>n>>k;
        for (int i=0; i<n*k; i++)
        {
            if (j>k-1)
                j=0;
            char a='a'+j;
            cout<<a;
            j++;
        }
        cout<<endl;
    }
    return 0;
}
