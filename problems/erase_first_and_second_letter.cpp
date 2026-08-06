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

    string s;
    cin >> s;

    vector<bool> seen(26, false);
    ll distinct_count = 0;
    ll total_distinct_strings = 0;

    for (int i = 0; i < n; i++)
    {
        if (!seen[s[i] - 'a'])
        {
            seen[s[i] - 'a'] = true;
            distinct_count++;
        }

        total_distinct_strings += distinct_count;
    }

    cout << total_distinct_strings << "\n";
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
