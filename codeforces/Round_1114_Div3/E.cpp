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

    vector<ll> b(n);
    map<ll, ll> counts;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        counts[b[i]]++;
    }

    vector<ll> v;
    vector<ll> cnt;
    for (auto const &[val, count] : counts)
    {
        v.push_back(val);
        cnt.push_back(count);
    }

    if (v[0] != 0)
    {
        cout << "-1\n";
        return;
    }

    int k = v.size();
    vector<ll> res(k);
    map<ll, ll> mp;

    if (k == 1)
    {
        res[0] = 1;
    }
    else
    {
        for (int i = 0; i < k - 1; i++)
        {
            ll diff = v[i + 1] - v[i];

            if (diff % cnt[i] != 0)
            {
                cout << "-1\n";
                return;
            }

            res[i] = diff / cnt[i];

            if (i > 0 && res[i] <= res[i - 1])
            {
                cout << "-1\n";
                return;
            }
        }
        res[k - 1] = res[k - 2] + 1;
    }

    for (int i = 0; i < k; i++)
    {
        mp[v[i]] = res[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << mp[b[i]] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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