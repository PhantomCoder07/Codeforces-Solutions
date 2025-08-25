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
        vector<string> s(3*n);
        unordered_map<string,int> freq;
        int p1=0,p2=0,p3=0;
        for (int i=0; i<3*n; i++)
        {
            cin>>s[i];
            freq[s[i]]++;
        }
        for (int i=0; i<3*n; i++)
        {
            int c=freq[s[i]];
            if (c==1)
            {
                if (i<n)
                    p1+=3;
                else if (i<2*n)
                    p2+=3;
                else
                    p3+=3;
            }
            else if (c==2)
            {
                if (i<n)
                    p1+=1;
                else if (i<2*n)
                    p2+=1;
                else
                    p3+=1;
            }
        }
        cout<<p1<<" "<<p2<<" "<<p3<<endl;
    }
    return 0;
}

