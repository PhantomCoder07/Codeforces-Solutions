#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        vector<int> x(2), y(2);
        for (int i=0; i<n; i++)
            cin>>s[i];
        int a=0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (s[i][j]=='*')
                {
                    x[a]=i;
                    y[a]=j;
                    a++;
                }
            }
        }
        if (x[0]==x[1])
        {
            int r=(x[0]+1<n)?x[0]+1:x[0]-1;
            s[r][y[0]]='*';
            s[r][y[1]]='*';
        }
        else if (y[0]==y[1])
        {
            int c=(y[0]+1<n)?y[0]+1:y[0]-1;
            s[x[0]][c]='*';
            s[x[1]][c]='*';
        }
        else
        {
            s[x[0]][y[1]]='*';
            s[x[1]][y[0]]='*';
        }

        for (int i=0; i<n; i++)
            cout<<s[i]<<endl;
    }
    return 0;
}
