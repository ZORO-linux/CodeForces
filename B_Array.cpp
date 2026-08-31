#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// floor(a / 2), works correctly for negatives too
ll floor_div2(ll a) {
    ll q = a / 2;
    ll r = a % 2;

    if (r != 0 && a < 0) q--;
    return q;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            vector<pair<ll,int>> events;

            int base = 0; 
            // number of intervals of type (-inf, R]

            for (int j = i + 1; j < n; j++) {

                if (a[i] == a[j]) continue;

                ll s = a[i] + a[j];

                if (a[i] < a[j]) {
                    // interval [L, +inf)
                    ll L = floor_div2(s) + 1;

                    events.push_back({L, +1});
                }
                else {
                    // interval (-inf, R]
                    // remove it starting from R+1
                    // R = floor((s-1)/2)
                    ll R = floor_div2(s - 1);

                    base++;

                    events.push_back({R + 1, -1});
                }
            }

            sort(events.begin(), events.end());

            int cur = base;
            int best = cur;

            for (int p = 0; p < (int)events.size(); ) {

                ll x = events[p].first;
                int delta = 0;

                while (p < (int)events.size() && events[p].first == x) {
                    delta += events[p].second;
                    p++;
                }

                cur += delta;
                best = max(best, cur);
            }

            ans[i] = best;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}