#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> x(3),y(3);
        for (int i=0; i<3; i++)
            cin>>x[i]>>y[i];
        if (y[0]==y[1] && y[0]>y[2])
            cout<<abs(x[0]-x[1])<<endl;
        else if (y[1]==y[2] && y[1]>y[0])
            cout<<abs(x[1]-x[2])<<endl;
        else if (y[0]==y[2] && y[0]>y[1])
            cout<<abs(x[0]-x[2])<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
