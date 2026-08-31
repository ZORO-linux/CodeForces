#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>> n >> k;
    int count = 0;
    vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int c = a[k-1];
        for(int i = 0; i<n; i++){
            if(a[i] >= c && a[i] > 0){
                count++;
            }
        }
        // int l = a.size();
    
    cout<<count;
    return 0;
}