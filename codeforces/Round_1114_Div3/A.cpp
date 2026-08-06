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
    int a, b, c;
    cin >> a >> b >> c;

    int ans = 0;

    while (true)
    {
        if (a == b || b == c || a == c)
        {
            cout << ans << "\n";
            return;
        }

        if (a > b && a > c)
        {
            a--;
            if (b < c)
                b++;
            else
                c++;
        }
        else if (b > a && b > c)
        {
            b--;
            if (a < c)
                a++;
            else
                c++;
        }
        else
        {
            c--;
            if (a < b)
                a++;
            else
                b++;
        }

        ans++;
    }
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
