#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int ans = x / 5;

    if (x % 5 != 0) {
        ans++;
    }

    cout << ans << endl;

    return 0;
}