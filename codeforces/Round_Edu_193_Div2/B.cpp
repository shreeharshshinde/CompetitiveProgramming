#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back

const int INF = 1e9 + 7;
const long long INFL = 1e18 + 7;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vi modules, counts;
    for (int i = 0; i < n; i++)
    {
        if (modules.empty() || a[i] != modules.back())
        {
            modules.pb(a[i]);
            counts.pb(1);
        }
        else
        {
            counts.back()++;
        }
    }

    int m = modules.size();

    if (m == 1)
    {
        cout << 1 << "\n";
        return;
    }

    for (int i = 0; i < m - 1; i++)
    {
        if (counts[i] >= 2 && counts[i + 1] >= 2)
        {
            cout << m + 2 << "\n";
            return;
        }
    }

    bool is_one = false;
    for (int k = 0; k < m; k++)
    {
        if (counts[k] < 2)
            continue;

        if (k == 0)
        {
            if (m == 2 || modules[2] != modules[0])
            {
                is_one = true;
                break;
            }
        }
        else if (k == m - 1)
        {
            if (m == 2 || modules[m - 3] != modules[m - 1])
            {
                is_one = true;
                break;
            }
        }
        else
        {
            bool optA = (k == 1 || modules[k - 2] != modules[k]);
            bool optB = (k == m - 2 || modules[k + 2] != modules[k]);
            if (optA || optB)
            {
                is_one = true;
                break;
            }
        }
    }

    if (is_one)
    {
        cout << m + 1 << "\n";
    }
    else
    {
        cout << m << "\n";
    }
}

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}