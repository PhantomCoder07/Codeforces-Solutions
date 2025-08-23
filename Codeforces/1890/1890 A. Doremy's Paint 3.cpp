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
        map<int, int> mp;
        for (int i = 0, x; i < n; ++i)
        {
            cin >> x;
            mp[x]++;
        }
        if (mp.size() >= 3)
        {
            cout << "NO\n";
        }
        else if (mp.size() == 1)
        {
            cout << "YES\n";
        }
        else
        {
            auto it = mp.begin();
            int freq1 = it->second;
            ++it;
            int freq2 = it->second;
            cout << (abs(freq1 - freq2) <= 1 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
