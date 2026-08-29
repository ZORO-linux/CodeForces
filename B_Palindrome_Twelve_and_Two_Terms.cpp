#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    long long pal[12] = {0,1,2,3,4,5,6,7,8,9,22,11};

    while (t--) {
        long long n;
        cin >> n;

        if (n == 10) {
            cout << -1 << '\n';
            continue;
        }

        long long a = pal[n % 12];

        if (a > n) {
            cout << -1 << '\n';
        } else {
            cout << a << ' ' << n - a << '\n';
        }
    }
}