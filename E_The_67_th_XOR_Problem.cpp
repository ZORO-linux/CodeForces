#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a;
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int x = 0;
        for(int i = 0; i<n; i++){
            x = a[i];
            for(int j = 0; j<n; j++){
                a[j] = a[j] ^ x;
            }
            a.erase(a.begin() + i);
        }
for (int x : a) {
    cout << x << " ";
}    }
    return 0;
}