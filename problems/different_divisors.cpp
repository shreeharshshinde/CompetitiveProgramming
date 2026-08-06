#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()

const int MAX = 30000;

vector<bool> isPrime(MAX + 1, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }
}

void solve()
{
    int d;
    cin >> d;

    ll firstPrime = 1 + d;
    while (!isPrime[firstPrime])
    {
        firstPrime++;
    }

    ll secondPrime = firstPrime + d;
    while (!isPrime[secondPrime])
    {
        secondPrime++;
    }

    cout << min(firstPrime * secondPrime, firstPrime * firstPrime * firstPrime) << "\n";
}

int main()
{
    fast;

    sieve();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
