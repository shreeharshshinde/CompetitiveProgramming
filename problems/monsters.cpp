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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int rem = a[i] % k;
        if (rem == 0)
            rem = k;
        v.push_back({rem, i + 1});
    }

    sort(v.begin(), v.end(), [](auto &x, auto &y)
         {
        if (x.first != y.first)
            return x.first > y.first;
        return x.second < y.second; });

    for (auto [rem, idx] : v)
    {
        cout << idx << " ";
    }

    cout << '\n';
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
