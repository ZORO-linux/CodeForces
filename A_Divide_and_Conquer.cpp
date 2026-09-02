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

void zoro(){
    // code here
    int x, y;
    cin >> x >> y;

if(x % y == 0){
    cout<< "YES" << '\n';
}
else{
    cout<< "NO" << '\n';
}

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