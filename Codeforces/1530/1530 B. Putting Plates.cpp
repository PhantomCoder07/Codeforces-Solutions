#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int h,w;
        cin>>h>>w;
        vector<vector<char>> s(h,vector<char>(w,'0'));
        s[0][0]='1';
        s[0][w-1]='1';
        s[h-1][0]='1';
        s[h-1][w-1]='1';
        if (w%2==1)
        {
            for (int i=2; i<w-1; i+=2)
            {
                s[0][i]='1';
                s[h-1][i]='1';
            }
        }
        else
        {
            for (int i=3; i<w-1; i+=2)
            {
                s[0][i]='1';
                s[h-1][i]='1';
            }
        }
        if (h%2==1 && h>3)
        {
            for (int i=2; i<h-1; i+=2)
            {
                s[i][0]='1';
                s[i][w-1]='1';
            }
        }
        else if (h>4)
        {
            for (int i=3; i<h-1; i+=2)
            {
                s[i][0]='1';
                s[i][w-1]='1';
            }
        }
        for (int i=0; i<h; i++)
        {
            for (int j=0; j<w; j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
