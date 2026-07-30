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
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a), greater<int>());
    int size = n;
    int start = 0;
    int end = n - 1;
    int ans = 0;
    while (start <= end)
    {
        int k = d / a[start] + 1;
        int remaining = end - start + 1;

        if (remaining < k)
            break;
        start++;
        end -= (k - 1);
        ans++;
    }
    cout << ans << "\n";
}

int main()
{
    fast;

    solve();

    return 0;
}
