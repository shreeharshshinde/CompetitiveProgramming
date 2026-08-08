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

const int MAXA = 200005;
vector<bool> is_prime(MAXA, true);

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < MAXA; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i < MAXA; i += p)
                is_prime[i] = false;
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    if (is_prime[n + 1])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    fast;
    sieve();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}