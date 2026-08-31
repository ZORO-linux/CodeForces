#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long need;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                need = __gcd(a[i], a[i + 1]);
            }
            else if (i == n - 1)
            {
                need = __gcd(a[n - 2], a[n - 1]);
            }
            else
            {
                long long g1 = __gcd(a[i - 1], a[i]);
                long long g2 = __gcd(a[i], a[i + 1]);
                need = lcm(g1, g2);
            }

            if (need <= a[i] && need != a[i] && a[i] % need == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}