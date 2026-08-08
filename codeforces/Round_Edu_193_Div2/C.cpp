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
    long long n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<long long> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    vector<long long> b(y);
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }

    vector<pair<long long, int>> elements;
    int i = 0, j = 0;

    while (i < x && j < y)
    {

        if (a[i] < b[j])
        {
            elements.push_back({a[i], 0});
            i++;
        }
        else if (a[i] > b[j])
        {
            elements.push_back({b[j], 1});
            j++;
        }
        else
        {
            elements.push_back({a[i], 2});
            i++;
            j++;
        }
    }

    while (i < x)
    {
        elements.push_back({a[i], 0});
        i++;
    }

    while (j < y)
    {
        elements.push_back({b[j], 1});
        j++;
    }

    sort(elements.begin(), elements.end(), [](const pair<long long, int> &p1, const pair<long long, int> &p2)
         { return p1.first > p2.first; });

    ll cost = 0;
    int cnt_a = 0;
    int cnt_b = 0;
    int total = 0;

    for (auto &p : elements)
    {
        if (total == n + m - 1)
            break;

        if (p.second == 0)
        {
            if (cnt_a < n)
            {
                cost += p.first;
                cnt_a++;
                total++;
            }
        }
        else if (p.second == 1)
        {
            if (cnt_b < m)
            {
                cost += p.first;
                cnt_b++;
                total++;
            }
        }
        else
        {
            cost += p.first;
            total++;
        }
    }

    cout << cost << "\n";
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