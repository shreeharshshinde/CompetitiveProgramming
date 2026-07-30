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
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    int maxFreq = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    unordered_map<int, int> runA, runB;

    int cnt = 1;
    runA[a[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            cnt++;
        else
            cnt = 1;

        runA[a[i]] = max(runA[a[i]], cnt);
    }

    cnt = 1;
    runB[b[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
            cnt++;
        else
            cnt = 1;

        runB[b[i]] = max(runB[b[i]], cnt);
    }

    int ans = 0;

    for (auto &[val, len] : runA)
        ans = max(ans, len + runB[val]);

    for (auto &[val, len] : runB)
        ans = max(ans, len + runA[val]);

    cout << ans << "\n";
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
