#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> a(m, vector<int>(n));
    int mini = INT_MAX;
    int neg = 0;
    long long sum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];

            sum += abs(a[i][j]);

            if (a[i][j] < 0)
                neg++;

            mini = min(mini, abs(a[i][j]));
        }
    }

    if (neg % 2 == 0)
        cout << sum << "\n";
    else
        cout << sum - 2LL * mini << "\n";
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
