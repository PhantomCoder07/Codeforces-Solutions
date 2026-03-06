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
        int a=(n/2)+1,b=1;
        for (int i=0; i<n; i++)
        {
            if (i%2==0)
            {
                cout<<a<<' ';
                a++;
            }
            else
            {
                cout<<b<<' ';
                b++;
            }
        }
        cout<<endl;
    }
    return 0;
}
