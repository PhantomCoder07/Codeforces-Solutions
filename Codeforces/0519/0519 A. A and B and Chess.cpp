#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s(8);
    for (int i=0; i<8; i++)
        cin>>s[i];
    int b=0,w=0;
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<8; j++)
        {
            if (isupper(s[i][j]))
            {
                if (s[i][j]=='Q')
                    w+=9;
                else if (s[i][j]=='R')
                    w+=5;
                else if (s[i][j]=='B')
                    w+=3;
                else if (s[i][j]=='N')
                    w+=3;
                else if (s[i][j]=='P')
                    w++;
            }
            else
            {
                if (s[i][j]=='q')
                    b+=9;
                else if (s[i][j]=='r')
                    b+=5;
                else if (s[i][j]=='b')
                    b+=3;
                else if (s[i][j]=='n')
                    b+=3;
                else if (s[i][j]=='p')
                    b++;
            }
        }
    }
    cout<<(w>b?"White":(b>w?"Black":"Draw"))<<endl;
    return 0;
}
