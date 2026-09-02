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
    int n;
    cin >> n;
    vector<ll> w(n);

    for(auto &x : w){
        cin>>x;
    }

    // Odd numbers cant swap numbers completely
    if(n % 2 != 0){
        cout<<"NO"<<'\n';
        return;
    }


    ll minOdd = LLONG_MAX;
    ll maxEven = LLONG_MIN;

    //Range of k should be maxEven < k < minOdd so that element 
    //at posi  does not go to -1 and element at posi n does not 
    //go to n-1

    for(int i = 0; i<n; i++){
        if(i % 2 == 0){
            // for posi {0, 2, 4 ,6 ,etc}
            minOdd = min(minOdd, w[i]);
        }
        else{
            maxEven = max(maxEven, w[i]);
        }
    }

    if(maxEven < minOdd - 1){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
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