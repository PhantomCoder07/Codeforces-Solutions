#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=1;
        cin>>n;
        cout<<n<<endl;
        for (int i=0; i<n; i++)
        {
            int k=1;
            for (int j=0; j<n; j++)
            {
                if (j+i==n-1)
                    cout<<n<<' ';
                else
                    cout<<k++<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}
