#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;

    vector<pair<ll, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());

    vector<ll> pref(n);
    pref[0] = v[0].first;
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + v[i].first;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}