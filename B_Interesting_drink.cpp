#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());   // sort once

    int q;
    cin >> q;

    while(q--) {
        int a;
        cin >> a;

        // count elements <= a
        int count = upper_bound(arr.begin(), arr.end(), a) - arr.begin();

        cout << count << endl;
    }

    return 0;
}