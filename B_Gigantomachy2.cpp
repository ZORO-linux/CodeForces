#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> bea(n);
        vector<long long> ver(m);

        for (int i = 0; i < n; i++) {
            cin >> bea[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> ver[i];
        }

        int a = 0; // Bea's current mountain
        int b = 0; // Ver's current mountain

        while (true) {

            // bea turn
            ver[b]--;
            // Ver checks whether he can move forward
            if (ver[b] == 0) {
                if (b == m - 1) {
                    // No mountains left for Ver
                    cout << 1 << '\n';
                    break;
                }
            }

            if (b + 1 < m && ver[b + 1] == ver[b] + 1) {
                b++;
            }

            // ver turn
            bea[a]--;

            // Bea checks whether she can move forward
            if (bea[a] == 0) {
                if (a == n - 1) {
                    // No mountains left for Bea
                    cout << 2 << '\n';
                    break;
                }
            }

            if (a + 1 < n && bea[a + 1] == bea[a] + 1) {
                a++;
            }
        }
    }

    return 0;
}