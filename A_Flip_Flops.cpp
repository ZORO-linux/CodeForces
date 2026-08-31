#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       long long c ,k;
       cin>>n>>c>>k;
       vector<long long> a(n);
       for(int i = 0; i<n; i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i<n; i++){
         // Can't kill this monster
            if (a[i] > c) break;

            // Use all remaining flip-flops here
            long long use = k;

            a[i] += use;
            k -= use;

            // Kill it
            c += a[i];
       }
       cout<<c<<endl;

    }
    return 0;
}