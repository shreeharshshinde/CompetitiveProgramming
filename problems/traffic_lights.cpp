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

    char c;
    cin >> c;

    string s;
    cin >> s;

    string search = s + s;
    int color = c;
    int green = 0;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (green < i)
            green = i;

        while (search[green] != 'g')
            green++;

        if (search[i] == c)
            ans = max(ans, green - i);
    }
    cout << ans << endl;
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
