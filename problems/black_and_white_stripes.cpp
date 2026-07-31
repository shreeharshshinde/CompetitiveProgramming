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
    string s;
    cin >> s;

    int whites = 0;

    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
            whites++;
    }

    int ans = whites;

    int start = 0;
    int end = k;

    while (end < n)
    {
        if (s[start] == 'W')
            whites--;

        if (s[end] == 'W')
            whites++;

        ans = min(ans, whites);

        start++;
        end++;
    }

    cout << ans << '\n';
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
