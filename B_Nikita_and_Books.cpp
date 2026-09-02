#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define F first
#define S second

void zoro() {
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll sum = 0;
    bool ok = true;

    for (int i = 0; i < n; i++) {
        sum += a[i];

        ll need = 1LL * (i + 1) * (i + 2) / 2;

        if (sum < need) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        zoro();
    }

    return 0;
}