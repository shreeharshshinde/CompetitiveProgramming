#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

void solve()
{

    int n;
    cin >> n;

    ll sum = 0;
    int maxFreq = 0;
    ll max_freq_val = 0;
    map<ll, int> freq;

    for (int i = 0; i < n; i++)
    {
        ll card;
        cin >> card;
        sum += card;
        freq[card]++;

        if (freq[card] > maxFreq)
        {
            maxFreq = freq[card];
            max_freq_val = card;
        }
    }

    if (maxFreq <= (n + 1) / 2)
    {
        cout << sum << "\n";
    }
    else
    {
        ll other_sum = sum - (ll)maxFreq * max_freq_val;
        ll max_damage = other_sum + (ll)(n - maxFreq + 2) * max_freq_val;
        cout << max_damage << "\n";
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
