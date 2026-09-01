#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Alice's move
        int pos0 = -1;

        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                pos0 = i;
                break;
            }
        }

        // No "01" found -> delete the last 0
        if (pos0 == -1) {
            pos0 = s.rfind('0');
        }

        s.erase(pos0, 1);

        // Bob's move: delete the first 1
        int pos1 = s.find('1');
        s.erase(pos1, 1);

        cout << s << '\n';
    }

    return 0;
    // 9467927326
}