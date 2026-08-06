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

    int blocks = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            blocks++;
    }

    int ans = blocks;

    for (int i = 1; i < n - 1; i++)
    {
    int delta = 0;

        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1])
        {
            delta -= 2;
        }
        else if (s[i] != s[i - 1] && s[i] != s[i + 1])
        {
            delta -= 1;
        }

        ans = min(ans, blocks + delta);
    }
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
