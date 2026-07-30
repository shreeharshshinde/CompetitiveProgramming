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

    int transitions = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            transitions++;
        }
    }

    int mini;
    if (transitions == 1)
        mini = 2;
    else
        mini = 1;

    cout << mini << "\n";
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
