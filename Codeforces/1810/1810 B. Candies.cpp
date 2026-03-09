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
        if (n%2==0)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> a;
        while (n>1)
        {
            if (((n+1)/2)%2==1)
            {
                a.push_back(1);
                n=(n+1)/2;
            }
            else
            {
                a.push_back(2);
                n=(n-1)/2;
            }
        }
        reverse(a.begin(),a.end());
        cout<<a.size()<<endl;
        for (int i: a)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
