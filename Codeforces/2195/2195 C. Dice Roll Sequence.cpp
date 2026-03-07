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
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        const int INF = 1e9;
        vector<vector<int>> dp(n, vector<int>(7, INF));
        for (int x = 1; x <= 6; x++)
            dp[0][x] = (a[0] != x);
        for (int i = 1; i < n; i++)
            for (int x = 1; x <= 6; x++)
                for (int p = 1; p <= 6; p++)
                    if (p != x && p + x != 7)
                        dp[i][x] = min(dp[i][x],dp[i-1][p] + (a[i] != x));
        cout << *min_element(dp[n-1].begin()+1, dp[n-1].end()) << '\n';
    }
}
