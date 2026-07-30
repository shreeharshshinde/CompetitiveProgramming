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

    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << "\n";
    }
    else
    {
        int largestDivisor = 1;
        bool isPrime = true;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;

                cout << n / i << " " << n - n / i << "\n";
                break;
            }
        }

        if (isPrime)
        {
            cout << 1 << " " << n - 1 << "\n";
        }
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
