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
    string s;
    cin >> s;

    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            ans += '0';
        else if (s[i] == '-' && s[i + 1] == '.')
            ans += '1', i++;
        else if (s[i] == '-' && s[i + 1] == '-')
            ans += '2', i++;
    }
    cout << ans << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
