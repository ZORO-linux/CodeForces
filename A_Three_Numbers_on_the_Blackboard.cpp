#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        int ans = 0;
        cin>> a >> b >> c;
        int arr[3] = {a, b, c};

        sort(arr, arr + 3);
        a = arr[0];
        b = arr[1];
        c = arr[2];
        if(a + b < c){
            ans =  b;
        }
        else{
            ans =  c - a;
        }
        cout<<ans<<"\n";
    }
    return 0;
}