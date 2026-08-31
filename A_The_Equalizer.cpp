#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int sum = 0;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            sum += x;
        }

        if(sum % 2 == 0 && (1LL*n*k % 2) == 1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }
    return 0;
}