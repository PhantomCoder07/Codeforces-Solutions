#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        string r,b;
        cin>>r>>b;
        for (int i=0; i<n; i++)
        {
            if (r[i]>b[i])
                c++;
            else if (r[i]<b[i])
                c--;
        }
        if (c>0)
            cout<<"RED"<<endl;
        else if (c<0)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
    return 0;
}
