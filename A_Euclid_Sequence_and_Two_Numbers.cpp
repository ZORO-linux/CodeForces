#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &b : a){
            cin>>b;
        }
        bool ok = true;
        sort(a.begin(), a.end(),greater<>());
        for(int i = 0; i<n - 2; i++){
            if(a[i+2] != a[i] % a[i+1]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<a[0]<<" "<<a[1]<<'\n';
        }
        else{
            cout<<"-1"<<'\n';
        }
    }
    return 0;
}